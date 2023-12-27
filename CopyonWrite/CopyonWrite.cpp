#include<iostream>
#include<memory>

class MyString {
public:
	MyString(const std::string& str) : data(std::make_shared<std::string>(str)) {}

	//コピーするために共有した同じデータを使う
	MyString(const MyString& other) : data(other.data) {
		std::cout << "Copied using the Copy-Write idiom." << std::endl;
	}
	//データを変更する場合のみコピーを作成
	void write(const std::string& str) {
		//複数の参照があるか確認する
		if (!data.unique()) {
			data = std::make_shared <std::string>(*data);
			std::cout << "Copy is actually made for writng";
		}
		*data = str;
	}
private:
	std::shared_ptr<std::string> data;
};

int main() {
	MyString str1("Hello");
	MyString str2 = str1;//参照が共有させる

	str1.write("Hello,Wolrd!");
}