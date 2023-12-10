#include<iostream>
//���z���\�b�h
//BaseClass
class Shape {
public:
	virtual double area() const {
		return 0;
	}
};

//Derive class
class Circle : public Shape {
public:
	Circle(double r) : radius(r){}

	//�x�[�X���\�b�h���I�[�o�[���C�h
	double area() const override {
		return 3.14 * radius * radius;
	}

private:
	double radius;
};

//Derived class
class Rectangle : public Shape {
public:
	Rectangle(double w, double h) : width(w), height(h) {}

	//�x�[�X���\�b�h���I�[�o�[���C�h
	double area() const override {
		return width * height;
	}
private:
	double width;
	double height;
};

int main() {
	Circle c(5);
	Rectangle r(4, 5);

	Shape* shape = &c;
	std::cout << "Circle's area: " << shape->area() << std::endl;

	shape = &r;
	std::cout << "Rectangle's area: " << shape->area() << std::endl;
	return 0;
}