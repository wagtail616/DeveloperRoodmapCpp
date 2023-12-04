#include <iostream>

int main() {
	int a = 12;
	int b = 5;

	int		   sum = a + b;//‰ÁZ
	std::cout << "sum = "<< sum << std::endl;
	int difference = a - b;//Œ¸Z
	std::cout << "difference = " << difference << std::endl;
	int    product = a * b;//æZ
	std::cout << "product = " << product << std::endl;
	int RDquotient = a / b;//œZ(®”Ø‚èÌ‚Ä)
	std::cout << "RDquotient = " << RDquotient << std::endl;
	float quotient = (float)a / (float)b;//œZ
	std::cout << "quotient = " << quotient << std::endl;
	int  remainder = a % b;//—]‚èŒvZ
	std::cout << "remainder = " << remainder << std::endl;

	int x = 5;
	std::cout << "x = " << x << std::endl;
	x = ++x;//æƒCƒ“ƒNƒŠƒƒ“ƒg
	std::cout << "++x = " << x << std::endl;
	x = x++;//ŒãƒCƒ“ƒNƒŠƒƒ“ƒg
	std::cout << "x++ = " << x << std::endl;

	x = --x;//æƒfƒNƒŠƒƒ“ƒg
	std::cout << "--x = " << x << std::endl;
	x = x--;//ŒãƒfƒNƒŠƒƒ“ƒg
	std::cout << "x-- = " << x << std::endl;
}