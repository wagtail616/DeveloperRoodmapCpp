#include <iostream>


int main() {
	int addNUmbers(int a, int b);//�v���g�^�C�v�錾

	using std::cout;
	using std::endl;

	int num1 = 5, num2 = 10;
	int result = addNumbers(num1, num2);//�֐��̌Ăяo��

	cout << "num1 = " << num1 << " num2 = " << num2<<"\n" << endl;

	cout << "The sum is " << result<< endl;;


	return 0;
}

//�֐��̒�`
int addNumbers(int a, int b) {
	int sum = a + b;
	return sum;
}