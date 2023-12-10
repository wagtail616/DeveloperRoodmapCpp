#include <iostream>

//零のルール
//クラスまたは構造体が
//リソースを明示的に管理しない場合
//デコンストラクタ、コピーコンストラクタなど
//特別なメンバーを定義すべきではない
struct MyResouce{
	std::string name;
	int value;
};

//参のルール
//リソースを管理するクラス、構造体は
//次の3つのメンバー機能を定義する必要がある
//Destructor
//Copy constructor
//Copy assignment operator
class MyResource {
public:
	//ConstructorとDestruter
	MyResource() : data(new int[100]){}
	~MyResource() { delete[] data; }

	//CopyConstructor
	MyResource(const MyResource& other) : data(new int[100]) {
		std::copy(other.data,other.data+100,data);
	}

	//Copy assignment operator
	MyResource& operator=(const MyResource& other) {
		if (&other == this) { return *this; }
		std::copy(other.data, other.data + 100, data);
		return *this;
	}
	//伍のルール
	//さらに2つの特別メンバー機能を追加します
	
	//Move constructor
	MyResource(MyResource&& other) noexcept :data(other.data) {
		other.data = nullptr;
	}

	//Move assignment operato
	MyResource& operator=(MyResource&& other)noexcept {
		if (&other == this) { return *this; }
		delete data;
		data = other.data;
		other.data = nullptr;
		return *this;
	}

private:
	int* data;
};

int main() {

}