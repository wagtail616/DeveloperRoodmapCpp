#include<iostream>

namespace animals {//名前空間
	std::string dog = "Bobby";
	std::string cat = "Lilly";
}
namespace outer {//名前空間のネスト
	int x = 10;
	namespace innner {
		int y = 20;
	}
}

int main() {
	//名前空間の呼び出し
	std::cout << "A dog name:" << animals::dog << std::endl;
	std::cout << "A cat name:" << animals::cat << std::endl;
	//ネストされた名前空間の呼び出し
	std::cout << "Outer x:" << outer::x << std::endl;
	std::cout << "inner y:" << outer::innner::y << std::endl;

	using animals::dog;//名前空間の省略
	std::cout << "A dog name:" << dog << std::endl;

}