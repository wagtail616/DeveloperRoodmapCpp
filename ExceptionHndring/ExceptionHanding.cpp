#include<iostream>
int divide(int a, int b) {
	if (b == 0) {//0�Ŋ��낤�Ǝ�
		throw "Division by zero";//�G���[�𓊂���
	}
	return a / b;//0���Z�Ŗ������a/b��Ԃ�
}

int main() {
	int num1,num2;

	std::cout << "Enter two numbers for division:\n";
	std::cin >> num1 >> num2;//num1�Anum2����͂���

	try {
		int result = divide(num1, num2);//num1����num2��������
			std::cout << "The result is:" << result << std::endl;
		}
		catch (const char* msg) {//�G���[���X���[���ꂽ��
			std::cerr << "Error: " << msg << std::endl;//�G���[���b�Z�[�W�\��
		}
		return 0;
}