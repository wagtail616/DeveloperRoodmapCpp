#include <string>
#include <iostream>

template<typename T>
T max(T a,T b){
	return (a > b) ? a : b;
}

int result = max<int>(10, 20); 
//int result = max(10, 20);
//�^�C�v�𐄒肳���邱�Ƃ��o����

//�e���v���[�g�N���X
template<typename T1, typename T2>
class Pair {
public:
	T1 first;
	T2 second;

	Pair(T1 first, T2 second):first(first), second(second){}
};

Pair<int, std::string>pair(1, "Hello");
//�I�u�W�F�N�g���쐬����Ƃ��Ƀ^�C�v�p�����[�^�̎w�肪�K�v

//�e���v���[�g���ꉻ
template<>
class Pair<char, char> {
public:
	char first;
	char second;

	Pair(char first,char seond):first(first), second(second) {
	//
		this->first = std::toupper(this->first);
		this->second = std::toupper(this->second);
	}
};
Pair<char,char>charPair('a','b');
int main() {

	std::cout << pair.first << pair.second << std::endl;
}