#include<iostream>

int main() {
	//未定義の動作

	int x;
	//初期化されていない変数の呼び出し
	//int y = x + 5;
	
	int arr[5];
	//int val = arr[5];
	//範囲外のメモリアクセス

	int* ptr = nullptr;
	//int val = *ptr;
	//ヌルポインターの使用

	x = 5;
	int y = 0;
	//int z = x / y;
	//零除算


}