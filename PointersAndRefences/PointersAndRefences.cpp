#include<iostream>

int add(int a,int b ) {
	return a + b;
}

int main() {
	using std::cout;
	using std::endl;
	//�|�C���^
	int num = 10;
	int* ptr = &num;//num�̃A�h���X�󂯓n��
	int value = *ptr;//ptr���w�������l����
	//�֐��|�C���^
	int (*funcptr)(int, int) = add;
	cout << funcptr(4,5)<<endl;

	//�Q��
	int& ref = num;
	cout << ref;
}