#include"my_class.h"
#include<iostream>

class MyClass_Impl//��������
{
public:
	void some_method() {
		std::cout << "Implementation method called!" << std::endl;
	}
};
MyClass::MyClass():pimpl(new MyClass_Impl()){}//�R���X�g���N�^
MyClass::~MyClass() { delete pimpl; }//�f�R���X�g���N�^

void MyClass::some_method() {
	pimpl->some_method();//delegation to the implementation
}