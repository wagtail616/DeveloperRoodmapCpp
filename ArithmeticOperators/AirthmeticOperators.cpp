#include <iostream>

int main() {
	int a = 12;
	int b = 5;

	int		   sum = a + b;//���Z
	std::cout << "sum = "<< sum << std::endl;
	int difference = a - b;//���Z
	std::cout << "difference = " << difference << std::endl;
	int    product = a * b;//��Z
	std::cout << "product = " << product << std::endl;
	int RDquotient = a / b;//���Z(�����؂�̂�)
	std::cout << "RDquotient = " << RDquotient << std::endl;
	float quotient = (float)a / (float)b;//���Z
	std::cout << "quotient = " << quotient << std::endl;
	int  remainder = a % b;//�]��v�Z
	std::cout << "remainder = " << remainder << std::endl;

	int x = 5;
	std::cout << "x = " << x << std::endl;
	x = ++x;//��C���N�������g
	std::cout << "++x = " << x << std::endl;
	x = x++;//��C���N�������g
	std::cout << "x++ = " << x << std::endl;

	x = --x;//��f�N�������g
	std::cout << "--x = " << x << std::endl;
	x = x--;//��f�N�������g
	std::cout << "x-- = " << x << std::endl;
}