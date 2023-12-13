#include<iostream>

class Base {
	virtual void somothing(){};
};
class Derived : public Base {};

int main(){
	int a = 10;
	//キャスティング
	float b = (float)a;
	//スタティックキャスティング
	float c = static_cast<float>(a);

	Base* base_ptr = new Derived();
	Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
	delete base_ptr;

}