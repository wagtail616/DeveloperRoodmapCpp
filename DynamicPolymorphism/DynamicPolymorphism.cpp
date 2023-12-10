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

	//circleのアドレスを保管
	shape = &circle;
	//circleの関数を呼び出し
	shape->draw();
	//rectangleのアドレスを保管
	shape = &rectangle;
	//rectangleの関数を呼び出し
	shape->draw();

	return 0;
}