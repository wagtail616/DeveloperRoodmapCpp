#include<iostream>
#include <vector>
#include <map>
#include<ranges>
//C++11�ȍ~
// �����_��
auto sum = [](int a, int b) -> int {return a + b; };
//�͈̓��[�v�x�[�X
std::vector<int> numbers = { 1,2,3,4 };

//C++14�ȍ~
// generic�����_��
auto generic_sum = [](auto a, auto b) {return a + b; };
//�o�C�i�����e����
int binary_number = 0b1010;

//C++17
//if��switch�̏�����
std::map<std::string, int>my_map = { {"A",1}, {"B",2} };
std::string key = "A";

//C++20
//concept
template<typename T>
concept Addable = requires(T a, T b) {
	{a + b}->std::same_as<T>;
};
//�͈�
auto doubled = numbers | std::views::transform([](int n) { return n * 2; });
int main() {
	//C++11�ȍ~
	//�����_��
	std::cout << sum(1, 2) << std::endl;

	//�͈̓x�[�X���[�v
	for (int num : numbers) {
		std::cout << num ;
	}
	std::cout<<std::endl;

	//C++17�ȍ~
	//if��switch�̏�����
	if (auto it = my_map.find(key); it != my_map.end()) {
		// use 'it' here
	}

	//�\�����o�C���f�B���O
	for (const auto& [key, value] : my_map) {
		//use 'key' and 'value' here
	}

	return 0;
}