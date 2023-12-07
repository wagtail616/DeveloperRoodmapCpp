#include<iostream>

//オブジェクトの有効期間

//静的ストレージ期間
//グローバル変数、静的データメンバー、静的ローカル変数などは
//プログラム実行時に割り振られ
//プログラム終了時に解除されます
int glovalVar;
class Myclass {
	static int static_var;
};
void myFunction() {
	static int local_var;
}

//スレッドストレージ期間
//そのオブジェクトの属するスレッドの
//存続時間中存在できる
thread_local int my_var;

//自動ストレージ期間
//宣言されたスコープが終了すると破棄
void myFunction2() {
	int local_var;
}


int main() {
	//動的ストレージ期間
	//メモリ解除はされないので手動で行う
	//ゆめゆめ忘るるべからず
	int* ptr = new int;
	delete ptr;
	return 0;
}