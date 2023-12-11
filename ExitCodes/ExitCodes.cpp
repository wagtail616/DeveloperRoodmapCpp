#include<iostream>

double division(double a , double b) {
	double result;
	result = a / b;
	return result;
}

int main() {
	double a, b;
	std::cout << "Enter two numbers for division:\n";
	std::cin >> a >> b;
	if (b==0) {
		std::cout << "Division by zero!";
		std::exit(1);
		std::cout << "Division by zero!";
	}
	
	std::cout << "a / b = "<< division(a,b);

	return 0;
	
	std::cout << "‚±‚±‚ÍŽÀs‚³‚ê‚È‚¢";

}