#include<iostream>

int main() {
	using std::cout;
	using std::endl;
	try {
		//エラー起こしそうなコード
		int num1 = 10, num2 = 0;
		if (num2 == 0) {
			throw "Division by zero not allowed!";
		}
		else {
			int result = num1 / num2;
			cout << "Result" << result << endl;
		}
	}
	catch(const char* e){
		cout << "Error:" << e << endl;
	}
	return 0;
}