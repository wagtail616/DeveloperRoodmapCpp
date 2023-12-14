#include<iostream>
namespace MyNamespace {
	class MyClass {
	public:
		int value;
	};
	
	std::ostream& operator << (std::ostream & os, const MyClass & obj) {
		os << "MyClass: " << obj.value;
		return os;
	}
}

int main() {
	MyNamespace::MyClass obj;
	obj.value = 42;
	using std::cout;
	cout << obj << std::endl;
}