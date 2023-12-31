#include <iostream>
//Base class 1
class Animal {
public:
	void eat() {
		std::cout << "I can eat!" << std::endl;
	}
};
//Base class 2
class Mammal {
public:
	void breath() {
		std::cout << "I can breathe!" << std::endl;
	}
};
//両方を継承した派生クラス
class Dog :public Animal, public Mammal {
public:
	void bark() {
		std::cout << "I can bark! Woof Woof!" << std::endl;
	}
};


int main() {
	Dog myDog;

	myDog.eat();
	myDog.breath();

	myDog.bark();
	return 0;

}