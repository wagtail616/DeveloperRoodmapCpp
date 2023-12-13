#include<iostream>
class BaseClass {
public:
	virtual void display() {
		std::cout << "BaseClass" << std::endl;
	}
};

class DerivedClass :public BaseClass {
public:
	void display() {
		std::cout << "DerivedClass" << std::endl;
	}
};


int main() {
	BaseClass* basePtr = new DerivedClass();
	DerivedClass* derivedPtr;

	derivedPtr = dynamic_cast<DerivedClass*>(basePtr);
	if (derivedPtr) {
		derivedPtr->display();
	}
	else {
		std::cout << "Invalid type conversion.";
	}

	delete basePtr;
	return 0;
}