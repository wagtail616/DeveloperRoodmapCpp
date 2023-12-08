#include<iostream>

int globalVar;//�O���[�o���ϐ�

namespace MyNameSpace {//���O��ԃX�R�[�v
	int namespaceVar = 42;
}

class MyClass {//�N���X�X�R�[�v
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