#include <iostream>
#include<Vector>
//�֐��̑O���錾
int add(int a, int b);
//�\����
struct Student {
	std::string name;
	int age;
};
//�N���X
class Employee {
public:
	std::string name;
	int age;
	void displayInfo() {
		std::cout << "Name: " << name << "\nAge: " << age;
	}
};

//�p���Ƒ��^
class Base {
public:
	void display(){
		std::cout << "This is  the base class";
	}
};
class Derived :public Base {
public:
	void display() {
		std::cout << "This is the Derived class";
	}
};

int main() {
	using std::cout;
	using std::endl;
	//�ϐ��ƃf�[�^�^�C�v
	int age = 25;//����
	float height = 1.7f;//���������_
	double salary = 50000.0;//�{���x���������_
	char grade = 'A';//����
	bool isEmployed = true;//�^�U

	//����\��
	//if��
	if (age > 18) {
		cout << "���N" << endl;
	}
	else {
		cout << "�����N" << endl;
	}
	//for���[�v
	for (int i = 0; i < 5; i++) {
		cout << "Hello world";
	}
	cout<<endl;

	//�֐��̌Ăяo��
	int sum = add(10, 20); 
	cout << "the sum is: " << sum;

	//�z��
	//Array
	int marks[] = { 90,80,95,85 };
	//Vector
	std::vector<int> scores = { 10,20,30,40 };

	//�|�C���^
	int num = 10;
	int* p = &num;

	//��O����
	try {//��O�������������Ȕ͈�
		int a = 10, b = 0;
		if (b == 0) {
			throw "Division by zero not allowed!";
		}
		else {
			int result = a / b;
			cout << "Result: " << result << endl;
		}
	}
	catch (const char* e) {
		cout << "Error:" << e << endl;
	}

	return 0;
}

//�֐��̐錾
int add(int a, int b) {
	return a + b;
}