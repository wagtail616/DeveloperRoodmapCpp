#include<iostream>

//テンプレートの特殊化
//template<typename T>
//void printData(const T& data) {
//	std::cout << "General template: " << data << std::endl;
//}

//template <>
//void printData(const char* const& data) {
//	std::cout << "Specialized template for const char*: " << data << std::endl;
//}

//テンプレートの部分的特殊化
template<typename K,typename V>
class MyPair {
public:
	MyPair(K k,V v):key(k),value(v){}

	void print() const {
		std::cout << "General template: key = " << key << ", value = " << value << std::endl;
	}
private:
	K key;
	V value;
};

template <typename T>
class MyPair<T, int> {
public:
	MyPair(T k, int v) :key(k), vlue(v) {

		void print() const {
			std::cout << "Partial specialization for int values: key = "
				<< ",value = " << value << std::endl;
		}
	}
private:
	T key;
	int value;
};

int main() {
	int a = 5;
	const char* str = "Hello World!";
//	printData(a);
//	printData(str);

	MyPair<double, std::string> p1(3.2, "example");
	MyPair<char, int>p2('A', 65);
	p1.print();

}