#include<iostream>
#include<vector>

auto add(int x, int y) {
	return x + y;
}

int main() {
	int myInt = 5;
	
	//本題
	auto myAutoInt = 5;
	
	//ベクター
	std::vector<int>myVector = { 1,2,3,4,5 };

	//auto にベクターを代入
	for (auto it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << std::endl;
	}

	//auto型は何らかの型で初期化しないとエラー
	//auto myvar;

	

}