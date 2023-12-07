#include<iostream>
//スタックメモリ
void functionExample() {
	int x = 10;
}
//ヒープメモリ
void functionExample2() {
	int* p = new int;
	*p = 10;
	delete p;//newしたらdelete
}
//初期化されたデータセグメント 
int globalVar = 10;
static int staticVar = 10;
const int  constVar = 10;

//初期化されていないデータセグメント
int globalVar2;

//コードセグメント
void functionExample3(){
	//この関数のマシンコードはコードセグメントに格納されます。
}

int main() {

}