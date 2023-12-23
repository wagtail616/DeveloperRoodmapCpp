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
	//何も実装しない。ベースの実装をそのまま動作させる
};

int main() {
	Derived1 d1;
	d1.interface();//Derived1が実行される

	Derived2 d2;
	d2.interface();//Baseがそのまま実行


	return 0;
}