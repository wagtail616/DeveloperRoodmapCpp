#include"my_class.h"
#include<iostream>

class MyClass_Impl//実装部分
{
public:
	void some_method() {
		std::cout << "Implementation method called!" << std::endl;
	}
};
MyClass::MyClass():pimpl(new MyClass_Impl()){}//コンストラクタ
MyClass::~MyClass() { delete pimpl; }//デコンストラクタ

void MyClass::some_method() {
	pimpl->some_method();//delegation to the implementation
}