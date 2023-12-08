#include<iostream>
//クラス前方宣言
class ClassA;

void do_somothing(ClassA& obj);

class ClassB {
public:
	void another_function(ClassA& obj);
};

int add(int a, int b);//関数の前方宣言

int main() {
	int result = add(2, 3);
	return 0;
}

int add(int a, int b) {
	return a+b;
}