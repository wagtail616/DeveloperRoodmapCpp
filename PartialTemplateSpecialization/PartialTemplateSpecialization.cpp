//Primary template

#include <iostream>
template<typename T>
struct MyTemplate {
	static const char* name() {
		return "General case";
	}
};

//partial specialization for pointers
template<typename T>
struct MyTemplate<T*> {
	static const char* name() {
		return "Partial specialization for pointers";
	}
};

//Full specialization for int 
template<>
struct MyTemplate<int> {
	static const char* name() {
		return "Full specialization for int ";
	}
};

int main() {
	MyTemplate<double> t1;
	MyTemplate<double*> t2;
	MyTemplate<int> t3;

	std::cout << t1.name() << std::endl;
	std::cout << t2.name() << std::endl;
	std::cout << t3.name() << std::endl;
}