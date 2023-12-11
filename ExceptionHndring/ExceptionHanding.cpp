#include<iostream>
int divide(int a, int b) {
	if (b == 0) {//0で割ろうと時
		throw "Division by zero";//エラーを投げる
	}
	return a / b;//0除算で無ければa/bを返す
}

int main() {
	int num1,num2;

	std::cout << "Enter two numbers for division:\n";
	std::cin >> num1 >> num2;//num1、num2を入力する

	try {
		int result = divide(num1, num2);//num1割るnum2を代入する
			std::cout << "The result is:" << result << std::endl;
		}
		catch (const char* msg) {//エラーがスローされたら
			std::cerr << "Error: " << msg << std::endl;//エラーメッセージ表示
		}
		return 0;
}