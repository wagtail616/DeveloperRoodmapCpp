#include<iostream>

int main() {
	int* ptr = new int;//new‰‰ŽZŽq
	*ptr = 42;
	delete ptr;//delete‰‰ŽZŽq

	int n = 10;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;//”z—ñ—p‚Ìdelete‰‰ŽZŽq
	return 0;
}