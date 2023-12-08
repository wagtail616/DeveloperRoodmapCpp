#include<iostream>

int globalVar;//グローバル変数

namespace MyNameSpace {//名前空間スコープ
	int namespaceVar = 42;
}

class MyClass {//クラススコープ
public:
	static int staticMember;
	int nonStaticMember;

	MyClass(int value) :nonStaticMember(value){}
};
int MyClass::staticMember = 7;
int main() {
	std::cout << "Global variable: " << globalVar << std::endl;

	std::cout << "NameSpace variable " << MyNameSpace::namespaceVar << std::endl;

	MyClass obj(10);
	std::cout << "Static member:" << MyClass::staticMember << std::endl;
	std::cout << "Non-static member:" << obj.nonStaticMember << std::endl;



}