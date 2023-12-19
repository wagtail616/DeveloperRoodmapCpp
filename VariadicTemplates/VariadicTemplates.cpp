#include<iostream>
//可変テンプレートを使用した複数の引数の合計
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

//可変テンプレートを使用したタプルクラス
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
	return 0;
}