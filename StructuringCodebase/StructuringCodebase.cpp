#include <iostream>
#include "MyClass.h"

namespace MyNamespace {
	int aFunction() {
		//�����ɏ���
	}
}

MyClass::MyClass() {
	//�R���X�g���N�^�@�����ɏ���
}

int MyClass::myMethod() {
	//���\�b�h�����ɏ���
}

int main() {

	//�t�@���N�V�����̎g����
	MyNamespace::aFunction();

	return 0;


}