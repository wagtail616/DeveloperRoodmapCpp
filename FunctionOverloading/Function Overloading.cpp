#include<iostream>
using std::cout;
using std::endl;

//関数のオーバーロード
void print(int num) {
	cout << "Printhin int: " << num << endl;
}
void print(double num) {
	cout << "Printhin int: " << num << endl;
}
void print(const char *str) {
	cout << "Printhin string: " << str << endl;
}

int main() {
	print(5);
	print(3.14);
	print("Hello,World!");

	return 0;
}
