#include<iostream>
//�N���X�̌p��
class Animal {
public:
	void breathe() {
		std::cout << "I can brethe" << std::endl;
	}
	virtual void makeSound() {
		std::cout << "The Animal makes a sound" << std::endl;
	}
};

//�N���X
class Dog :public Animal{
public:
	std::string name;
	int age;

	void bark() {
		std::cout << name << " barks!" << std::endl;
	}
	void makeSound() override {
		std::cout << "Dog barks!" << std::endl;
 	}
};
class Dog2 :public Animal {
private:
	std::string name;
	int age;

public:

	void setName(std::string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}

	void bark() {
		std::cout << name << " barks!" << std::endl;
	}
};

class Cat :public Animal {
public:
	void makeSound() override {
		std::cout << "Cat meows" << std::endl;
	}
};

int main() {
	Dog myDog;
	myDog.name = "Fido";
	myDog.age = 3;
	myDog.bark();

	Dog2 myDog2;
//	myDog2.name = "Fido"; �����o�[������J�̂���
//	myDog2.age = 3;�@�@�@�@�A�N�Z�X�s��
	myDog2.setName("John");
	myDog2.setAge(4);
	myDog2.bark();

	myDog.breathe();
	Cat myCat;
	myCat.makeSound();
}