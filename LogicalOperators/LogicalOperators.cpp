#include <iostream>

int main() {

	using std::cout; // std::cout �� cout �Ə�����
	using std::endl; // std::endl �� endl �Ə�����

	{
		int a = 5, b = 10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 && b > 0) {
			cout << "�������̐�" << endl;
		}
	}

	{
		int a = 5, b = -10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 || b > 0) {
			cout << "�ǂ��炩�͐��̐�" << endl;
		}
	}

	{
		int a = 5;
		cout << " a = " << a << endl;
		if (!(a < 0)) {
			cout << "���̐��ł͂Ȃ�" << endl;
		}

	}
	{
		int a = 5, b = -10, c = 15;
		cout << " a = " << a << " b = " << b <<" c ="<< c << endl;
		if (a > 0 && (b > 0 || c >> 0)) {
			cout << "A�������AB�܂���C����" << endl;
		}
	}

}