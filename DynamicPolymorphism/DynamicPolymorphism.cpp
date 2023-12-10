#include <iostream>

//Base class
class Shape {
public:
	virtual void draw() {
		std::cout << "Drawing shape" << std::endl;
	}
};

//Derived class 1
class Circle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a circle" << std::endl;
	}
};
//Derved class 2
class Rectangle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a rectangle" << std::endl;
	}
};

int main() {
	Shape* shape;
	Circle circle;
	Rectangle rectangle;

	//circle�̃A�h���X��ۊ�
	shape = &circle;
	//circle�̊֐����Ăяo��
	shape->draw();
	//rectangle�̃A�h���X��ۊ�
	shape = &rectangle;
	//rectangle�̊֐����Ăяo��
	shape->draw();

	return 0;
}