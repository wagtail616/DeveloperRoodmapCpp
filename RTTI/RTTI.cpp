#include <iostream>
#include <typeinfo>


class Base { virtual void dummy() {} };
class Derived : public Base {/*謎のコメントアウト*/ };

class Derived1 : public Base {/*謎のコメントアウト*/ };
class Derived2 : public Base {/*謎のコメントアウト*/ };


int main() {
	using std::cout;
	using std::endl;
	using std::string;

	//typeid演算子
	Base* base_ptr = new Derived;

	//tapeidを使用してオブジェクトのタイプを取得する
	cout << "Type: " << typeid(*base_ptr).name() << '\n';


	//ダイナミックキャスト演算子
	
	 base_ptr = new Derived1;

	//Dynamic_cast を使用してポインタを安全にダウンキャストする
	Derived1* Deriverd1_ptr = dynamic_cast<Derived1*>(base_ptr);
	if (Deriverd1_ptr) {
		cout << "Downcast to Derived1 successful\n";
	}
	else {
		cout << "Downcast to Derived1 failed\n";
	}

	Derived2* Deriverd2_ptr = dynamic_cast<Derived2*>(base_ptr);
	if (Deriverd2_ptr) {
		cout << "Downcast to Derived2 successful\n";
	}
	else {
		cout << "Downcast to Derived2 failed\n";
	}

	delete base_ptr;
	return 0;
}