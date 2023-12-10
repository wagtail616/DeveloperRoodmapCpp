#include<iostream>

class Base {
public:
	void print() {
		std::cout << "Base class" << std::endl;
	}
};

class Derived1 :virtual public Base {
public:
	void derived1print() {
		std::cout << "Derived1 class" << std::endl;
	}
};