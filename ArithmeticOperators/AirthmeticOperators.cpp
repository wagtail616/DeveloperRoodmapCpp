#include <iostream>

int main() {
	int a = 12;
	int b = 5;

	int		   sum = a + b;//加算
	std::cout << "sum = "<< sum << std::endl;
	int difference = a - b;//減算
	std::cout << "difference = " << difference << std::endl;
	int    product = a * b;//乗算
	std::cout << "product = " << product << std::endl;
	int RDquotient = a / b;//除算(整数切り捨て)
	std::cout << "RDquotient = " << RDquotient << std::endl;
	float quotient = (float)a / (float)b;//除算
	std::cout << "quotient = " << quotient << std::endl;
	int  remainder = a % b;//余り計算
	std::cout << "remainder = " << remainder << std::endl;

	int x = 5;
	std::cout << "x = " << x << std::endl;
	x = ++x;//先インクリメント
	std::cout << "++x = " << x << std::endl;
	x = x++;//後インクリメント
	std::cout << "x++ = " << x << std::endl;

	x = --x;//先デクリメント
	std::cout << "--x = " << x << std::endl;
	x = x--;//後デクリメント
	std::cout << "x-- = " << x << std::endl;
}