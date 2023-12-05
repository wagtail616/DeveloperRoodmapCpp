#include <string>
#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	using std::string;
	string judge(bool a);
	{
		//Zp‰‰Zq
		int a = 5, b = 3;
		cout << "a = " << a << " b = " << b << "\n" << endl;
		cout << "a + b = " << a + b << endl;
		cout << "a - b = " << a - b << endl;
		cout << "a * b = " << a * b << endl;
		cout << "a / b = " << a + b << endl;
		cout << "a % b = " << a + b <<"\n" << endl;
	}
	{
		//”äŠr‰‰Zq
		int a = 5, b = 3;
		cout << "a = " << a << " b = " << b << "\n" << endl;

		bool Equal = (a == b);
		cout << "a == b ‚Í " << judge(Equal) << endl;
		bool NotEqual = (a != b);
		cout << "a != b ‚Í " << judge(NotEqual) << endl;
		bool isLess = (a < b);
		cout << "a < b ‚Í " << judge(isLess) << endl;
		bool isGreater = (a > b);
		cout << "a > b ‚Í " << judge(isGreater) << endl;
		bool isLessEqual = (a <= b);
		cout << "a <= b ‚Í " << judge(isLessEqual) << endl;
		bool isGreaterEqual = (a >= b);
		cout << "a >= b ‚Í " << judge(isGreaterEqual) << "\n" << endl;
	}
	{
		//˜_—‰‰Zq
		bool result;
		result = (true && false);
		cout << "true && false ‚Í " << judge(result) << endl;
		result = (true || false);
		cout << "true || false ‚Í " << judge(result) << endl;
		result = (!true);
		cout << "        !true ‚Í " << judge(result) << "\n" << endl;
	}
	{
		//‘ã“ü‰‰Zq
		int x = 5;//‘ã“ü
		cout << "      x = " << x << endl;
		x += 3;//‰ÁZ
		cout << " x += 3 = " << x << endl;
		x -= 3;//Œ¸Z
		cout << " x -= 3 = " << x << endl;
		x *= 3;//Œ¸Z
		cout << " x *= 3 = " << x << endl;
		x /= 3;//œZ
		cout << " x /= 3 = " << x << endl;
		x %= 3;//—]‚èŒvZ
		cout << " x %= 3 = " << x << endl;
	}
}

std::string judge(bool a) {
	std::string result;
	if (a == 1) {
		result = "Ture";
	}
	else {
		result = "false";
	}

	return result;
};