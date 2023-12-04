#include <iostream>

int main() {

	using std::cout; // std::cout ‚ğ cout ‚Æ‘‚¯‚é
	using std::endl; // std::endl ‚ğ endl ‚Æ‘‚¯‚é

	{
		int a = 5, b = 10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 && b > 0) {
			cout << "—¼•û³‚Ì”" << endl;
		}
	}

	{
		int a = 5, b = -10;
		cout << " a = " << a << " b = " << b << endl;
		if (a > 0 || b > 0) {
			cout << "‚Ç‚¿‚ç‚©‚Í³‚Ì”" << endl;
		}
	}

	{
		int a = 5;
		cout << " a = " << a << endl;
		if (!(a < 0)) {
			cout << "•‰‚Ì”‚Å‚Í‚È‚¢" << endl;
		}

	}
	{
		int a = 5, b = -10, c = 15;
		cout << " a = " << a << " b = " << b <<" c ="<< c << endl;
		if (a > 0 && (b > 0 || c >> 0)) {
			cout << "A‚ª³‚©‚ÂAB‚Ü‚½‚ÍC‚ª³" << endl;
		}
	}

}