#include<iostream>

int main(){
	//アクセス違反

	//nullまたは無効なポインターへの逆参照
	int *p = nullptr;
	//int x=*p;

	//配列の範囲外にアクセス
	int arr[5] = { 1,2,3,4,5 };
	//int y = arr[5];

	//解放された記憶の読み書き
	int* p2 = new int[10];
	delete[] p2;
	//p2[3] =42;


}