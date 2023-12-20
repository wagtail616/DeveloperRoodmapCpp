#include<iostream>
//���S�ȃe���v���[�g�̐�剻
template<typename T>
class MyContainer {
public:
	void print() {
		std::cout << "Generic container" << std::endl;
	}
};

template<>
class MyContainer<int> {
public:
	void print() {
		std::cout << "Container for integers." << std::endl;
	}
};

int main() {
	MyContainer<double> d;
	MyContainer<int>i;
	d.print();
	i.print();
	return 0;
}