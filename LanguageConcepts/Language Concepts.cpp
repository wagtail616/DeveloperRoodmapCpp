#include <iostream>
#include<Vector>
//関数の前方宣言
int add(int a, int b);
//構造体
struct Student {
	std::string name;
	int age;
};
//クラス
class Employee {
public:
	std::string name;
	int age;
	void displayInfo() {
		std::cout << "Name: " << name << "\nAge: " << age;
	}
};

//継承と多型
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
	//変数とデータタイプ
	int age = 25;//整数
	float height = 1.7f;//浮動小数点
	double salary = 50000.0;//倍精度浮動小数点
	char grade = 'A';//文字
	bool isEmployed = true;//真偽

	//制御構造
	//if分
	if (age > 18) {
		cout << "成年" << endl;
	}
	else {
		cout << "未成年" << endl;
	}
	//forループ
	for (int i = 0; i < 5; i++) {
		cout << "Hello world";
	}
	cout<<endl;

	//関数の呼び出し
	int sum = add(10, 20); 
	cout << "the sum is: " << sum;

	//配列
	//Array
	int marks[] = { 90,80,95,85 };
	//Vector
	std::vector<int> scores = { 10,20,30,40 };

	//ポインタ
	int num = 10;
	int* p = &num;

	//例外処理
	try {//例外が発生しそうな範囲
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

//関数の宣言
int add(int a, int b) {
	return a + b;
}