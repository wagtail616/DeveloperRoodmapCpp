#include <iostream>
//���\�[�X�̎��������߂�
class Resourse {
public:
	Resourse(){/*Acquire resource */ }
	~Resourse(){/*Release resource */ }
};
void function() {
	Resourse r;// Resource is acquired;
	//...
}//Resource is relesed when r goes out of scope


//3�̃��[��
class MyClass {
public:
	MyClass();
	MyClass(const MyClass& other);//CopyConstructor
	MyClass& operator=(const MyClass& other);//CopyAssigneOperator
	~MyClass();//Destructor
};


//5�̃��[��
class MyClass {
public:
	MyClass();
	MyClass(const MyClass& other);//CopyConstructor
	MyClass(MyClass&& other);//MoveConstructor
	MyClass& operator=(const MyClass& other);//CopyAssigneOperator
	MyClass& operator=(const MyClass& other);//MoveAssignmentOperator
	~MyClass();//Destructor
};

//header file
//�w�b�_�[�t�@�C���ɏ���
class MyClass {
public:
	MyClass();
	~MyClass();
	void someMethod();
private:
	class Impl;
	Impl* pImpl;

};

//implementation file
//�\�[�X�ɏ���
class MyClass::Impl {
public:
	void someMethod(){/*Implemetation */ }
};

MyClass::MyClass() : pImpl(new Impl()) {}
MyClass::~MyClass() { delete pImpl; }
void MyClass::someMethod() { pImpl->someMethod(); }

//�񉼑z�C���^�[�t�F�C�X
class Base {
public:
	void publicMetod() {
		//Common behavior
		privateMethod();//
	}
protected:
	virtual void privateMethod() = 0;
};

class Derived :public Base {
protected:
	virtual void privateMethod() override {
		//Derived impementation
	}
};