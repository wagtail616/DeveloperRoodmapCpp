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

	Base* base_ptr = new Derived();
	Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
	delete base_ptr;

}