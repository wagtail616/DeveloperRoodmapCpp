#include <iostream>

class Base {
public:
	virtual void function1() {
		std::cout << "Base::function1" << std::endl;
	}

	virtual void function2() {
		std::cout << "Base::function2" << std::endl;
	}
};

class Derived : public Base {
public:
	void function1() override {
		std::cout << "Derived::function1" << std::endl;
	}
	void function3()  {
		std::cout << "Derived::function3" << std::endl;
	}
};

int main() {
	Base* obj = new Derived();
	obj->function1();
	obj->function2();

	delete obj;
	return 0;
}