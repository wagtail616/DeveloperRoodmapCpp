#include <iostream>

class Base{/*・・・*/ };
class Derived :public Base{/*…*/ };

int main() {
	//スタティックキャスト構文
	//static_cast<new_type>(expression);

	//整数をフロートにキャスト
	int i = 42;
	float f = static_cast<float>(i);
	
	//継承階層内の様々なオブジェクトタイプのポインタをキャスト
	Base* bptr = new Derived;
	Derived* bptr = static_cast<Derived*>(bptr);

	delete bptr;

	//整数を列数に変換
	enum Color{RED,GREEN,BLUE};
	int value = 1;
	Color color = static_cast<Color>(value);
	return 0;
	//異なるオブジェクトタイプ間で
	//ポインタをキャストする場合
	//ポインタの元のタイプがターゲットタイプト一致しない場合、
	//予期しない動作が発生する可能性があります。

}