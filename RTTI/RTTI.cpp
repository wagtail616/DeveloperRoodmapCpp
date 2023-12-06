#include <iostream>
#include <typeinfo>


class Base { virtual void dummy() {} };
class Derived : public Base {/*��̃R�����g�A�E�g*/ };

class Derived1 : public Base {/*��̃R�����g�A�E�g*/ };
class Derived2 : public Base {/*��̃R�����g�A�E�g*/ };


int main() {
	using std::cout;
	using std::endl;
	using std::string;

	//typeid���Z�q
	Base* base_ptr = new Derived;

	//tapeid���g�p���ăI�u�W�F�N�g�̃^�C�v���擾����
	cout << "Type: " << typeid(*base_ptr).name() << '\n';


	//�_�C�i�~�b�N�L���X�g���Z�q
	
	 base_ptr = new Derived1;

	//Dynamic_cast ���g�p���ă|�C���^�����S�Ƀ_�E���L���X�g����
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