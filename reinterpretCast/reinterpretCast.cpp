#include <iostream>
int main() {
	int num = 42;
	int* num_ptr = &num;

	//
	char* char_ptr = reinterpret_cast<char*>(num_ptr);

	for (size_t i = 0; i < sizeof(int); ++i) {
		std::cout << "Byte " << i << ";" << char_ptr[i] << std::endl;
	}
	return 0;
}