#include <iostream>

auto printHello = []() {
	std::cout << "Hello,World" << std::endl;
};
auto add = [](int a, int b) {
	return a + b;
};

int main() {
	int result = 0;
	
	printHello();
	
	result = add(3, 4);
	std::cout << "3 + 4 = " << result<<std::endl;

	int multiplier = 3;

	auto times = [multiplier](int a) {
		return a * multiplier;
	};
	result = times(1);
	std::cout << "result = " << result << std::endl;
	
	int expiresInDays = 45;
	auto updateDays = [&expiresInDays](int newDays) {
		expiresInDays = newDays;
	};
	updateDays(30);
	std::cout << "expiresInDays = " << expiresInDays << std::endl;
}