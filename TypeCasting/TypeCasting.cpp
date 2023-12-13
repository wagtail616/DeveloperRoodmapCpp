#include<iostream>

class Base {
	virtual void somothing(){};
};
class Derived : public Base {};

int main(){
	int a = 10;
	//�L���X�e�B���O
	float b = (float)a;
	//�X�^�e�B�b�N�L���X�e�B���O
	float c = static_cast<float>(a);

	//�_�C�i�~�b�N�L���X�g
	Base* base_ptr = new Derived();
	Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
	delete base_ptr;

	//reinterpretCast
	int* d = new int(42);
	long e = reinterpret_cast<long>(d);
	delete d;
	
	//const cast
	const int a = 10;
	int* ptr = const_cast<int*>(&a);
	*ptr = 20;

}