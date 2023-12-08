#include <iostream>
#include "MyClass.h"

namespace MyNamespace {
	int aFunction() {
		//ここに処理
	}
}

MyClass::MyClass() {
	//コンストラクタ　ここに書く
}

int MyClass::myMethod() {
	//メソッドここに書く
}

int main() {

	//ファンクションの使い方
	MyNamespace::aFunction();

	return 0;


}