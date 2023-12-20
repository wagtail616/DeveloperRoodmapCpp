#include<iostream>
//�σe���v���[�g���g�p���������̈����̍��v
//Base case for recursion
template<typename T>
T sum(T t) {
	return t;
}

//Varidaic template
template<typename T,typename... Args>
T sum(T t, Args...args) {
	return t + sum(args...);
}
template<typename T>
void print(T t) {
	//�Ō�Ɉ�񂾂��Ăяo��
	std::cout << " b:" << t;
}
template<typename T,typename... Args>
void print(T t, Args...args) {
	std::cout<<" a:"<<t;
	print(args...);
};

//�σe���v���[�g���g�p�����^�v���N���X
template<typename... Types>
class Tuple;

//Base case: empty tuple
template<>
class Tuple<> {};

//Recursive case: Tuple with one or more elements
template<typename Head,typename...Tail>
class Tuple<Head, Tail...> :public Tuple<Tail...> {
public:
	Tuple(Head head,Tail...tail):Tuple<Tail...>(tail...),head_(head){}

	Head head() const { return head_; }
private:
	Head head_;
};

int main() {
	int result = sum(1, 2, 3, 4, 5,6);//expands to 1+2+3+4+5
	std::cout << "The sum is:" << result << std::endl;


	Tuple<int, float, double>tuple(1, 2.0f, 3.0);
	std::cout << "First element: " << tuple.head() << std::endl;
	//print(1,2,3,4,5,6,7,8,9,10);
	return 0;
}