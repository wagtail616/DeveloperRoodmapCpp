#include <iostream>

int main() {

	using std::cout; // std::cout を cout と書ける
	using std::endl; // std::endl を endl と書ける

	{
		int a = 5, b = 10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 && b > 0) {
			cout << "両方正の数" << endl;
		}
	}

	{
		int a = 5, b = -10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 || b > 0) {
			cout << "どちらかは正の数" << endl;
		}
	}

	{
		int a = 5;
		cout << " a = " << a << endl;
		if (!(a < 0)) {
			cout << "負の数ではない" << endl;
		}

	}
	{
		int a = 5, b = -10, c = 15;
		cout << " a = " << a << " b = " << b <<" c ="<< c << endl;
		if (a > 0 && (b > 0 || c >> 0)) {
			cout << "Aが正かつ、BまたはCが正" << endl;
		}
	}

}