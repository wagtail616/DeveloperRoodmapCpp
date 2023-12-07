#include<iostream>

int add(int a,int b ) {
	return a + b;
}

int main() {
	using std::cout;
	using std::endl;
	//ポインタ
	int num = 10;
	int* ptr = &num;//numのアドレス受け渡し
	int value = *ptr;//ptrが指し示す値を代入
	//関数ポインタ
	int (*funcptr)(int, int) = add;
	cout << funcptr(4,5)<<endl;

	//参照
	int& ref = num;
	cout << ref;
}