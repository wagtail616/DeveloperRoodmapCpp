#include<iostream>
#include <vector>
#include <thread>
//C++14
//�σe���v���[�g
template<typename T>
constexpr T pi = T(3.1415926535897932385);
float r = pi<float>;
double d = pi<double>;

int main() {
	//�����ŃR���p�C�����ϐ��^�C�v��\��
	auto integer = 42;
	auto floating = 3.14;

	//�͈̓x�[�X���[�v
	std::vector<int> numbers{ 1,2,3,4 };

	//�����_�֐�
	auto add = [](int a, int b)-> int {return a + b; };
	int sum = add(42, 13);

	//nullptr Null�|�C���^�[�̕\�L�ł͈�Ԉ��S
	int* ptr = nullptr;

	//�X���b�h�T�|�[�g���C�u����
	std::thread t([]() {std::cout << "Hello from another thread\n"; });
	t.join();

	//C++14�ȍ~
	// �W�F�l���b�N�����_
	auto add2 = [](auto a, auto b) {return a + b;};
	auto sum_i = add2(42, 13);
	auto sum_j = add2(3.14,2.72);
	

	//�o�C�i���[���e����
	int c = 0b110101;

	//decltype
	//�ϐ��̃^�C�v�����������ꂽ�����̃^�C�v�ƈ�v����悤�Ɍ������܂�
	auto func = [](auto a, auto b) {return a * b; };
	decltype(auto) result = func(5, 3.14);

}