#include<iostream>
//�N���X�O���錾
class ClassA;

void do_somothing(ClassA& obj);

class ClassB {
public:
	void another_function(ClassA& obj);
};

int add(int a, int b);//�֐��̑O���錾

int main() {
	int result = add(2, 3);
	return 0;
}

int add(int a, int b) {
	return a+b;
}