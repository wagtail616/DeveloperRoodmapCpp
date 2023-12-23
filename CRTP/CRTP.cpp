#include <iostream>

template<typename Derived>
class Base {
public:
	void interface() {
		static_cast<Derived*>(this)->implementation();
	}
	void implementation() {
		std::cout << "Default imlementation in Base" << std::endl;
	}
};

class Derived1 :public Base<Derived1> {
public:
	void implementation() {
		std::cout << "Custom implementation in DeriVed1" << std::endl;
	}
};
class Derived2 :public Base<Derived2> {
	//�����������Ȃ��B�x�[�X�̎��������̂܂ܓ��삳����
};

int main() {
	Derived1 d1;
	d1.interface();//Derived1�����s�����

	Derived2 d2;
	d2.interface();//Base�����̂܂܎��s


	return 0;
}