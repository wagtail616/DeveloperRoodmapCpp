#include<iostream>

int main() {
	int* ptr = new int;//new���Z�q
	*ptr = 42;
	delete ptr;//delete���Z�q

	int n = 10;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;//�z��p��delete���Z�q
	return 0;
}