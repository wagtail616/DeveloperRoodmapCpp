#include <iostream>
#include <any>

int main() {
	using std::string;
	using std::cout;
	using std::endl;

	int  x = 42;
	float y = 3.14f;
	string z = "Hello, World";
	//�|�C���^
	void* void_ptr;

	void_ptr = &x;//�A�h���X�󂯓n��
	cout << "int value: " << *(static_cast<int*>(void_ptr)) << endl;//int*�ŏo��

	void_ptr = &y;//�A�h���X�󂯓n��
	cout << "float value: " << *(static_cast<float*>(void_ptr)) << endl;//double*�ŏo��

	void_ptr = &z;//�A�h���X�󂯓n��
	cout << "string value: " << *(static_cast<string*>(void_ptr)) << endl;//string*�ŏo��

	//any
	std::any any_value;//�A�h���X�󂯓n���s�v�Ȃ�ł�����

	any_value = 42;
	cout << "int value: " << (std::any_cast<int>(any_value)) << endl;//�o�͎���int�^���w��

	any_value = 3.14;
	cout << "double value: " << (std::any_cast<double>(any_value)) << endl;//�o�͎���double�^���w��

	any_value = string("Hello,world!");
	cout << "double value: " << (std::any_cast<string>(any_value)) << endl;//�o�͎���string�^���w��

	return 0;
}