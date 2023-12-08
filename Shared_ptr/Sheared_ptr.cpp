#include<iostream>
#include<memory>
class MyClass {
public:
	MyClass() { std::cout << "ここでデータ占有." << std::endl; }
	~MyClass() { std::cout << "ここでデータ破棄." << std::endl; }
};

int main() {
	//共用ポインターを作成してmyClassオブジェクトとして管理
	std::shared_ptr<MyClass> ptr1(new MyClass());
	{
		//別の共有ポインタを作成し、以前に作成したポインタで初期化します。
		std::shared_ptr<MyClass> ptr2 = ptr1;

		std::cout << "ここはスコープ内部" << std::endl;
		//両方のポインタが同じオブジェクトを共有し、参照数が2になりました。
	}
	std::cout <<"ここからスコープ外部" << std::endl;
}