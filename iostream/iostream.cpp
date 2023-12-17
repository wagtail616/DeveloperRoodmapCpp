#include<iostream>

int main() {
	int a;
	std::cout << "Enter a number";
	std::cin >> a;
	std::cout << "You entered: " << a << std::endl;

	std::cerr << "An error occurred." << std::endl;
	std::clog << "Logging infomation." << std::endl;
	return 0;
}