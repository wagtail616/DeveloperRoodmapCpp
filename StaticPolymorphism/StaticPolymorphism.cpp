#include<iostream>

//�֐��̃I�[�o�[���[�h
/*
void print(int i) {
	std::cout << "printing int" << i << std::endl;
}

void print(double d) {
	std::cout << "printing double" << d << std::endl;
}

void print(const char* s) {
	std::cout << "printing string" << s << std::endl;
}
*/
//�e���v���[�g
template<typename T>
void print(const T& value) {
	std::cout << "Printing value: " << value << std::endl;
}

int main() {
	print(5);
	print(3.14);
	print("Hello");


	return 0;
}