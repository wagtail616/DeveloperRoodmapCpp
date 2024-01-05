#include<iostream>
#include <vector>
#include <map>
#include<ranges>
//C++11以降
// ラムダ式
auto sum = [](int a, int b) -> int {return a + b; };
//範囲ループベース
std::vector<int> numbers = { 1,2,3,4 };

//C++14以降
// genericラムダ式
auto generic_sum = [](auto a, auto b) {return a + b; };
//バイナリリテラル
int binary_number = 0b1010;

//C++17
//ifとswitchの初期化
std::map<std::string, int>my_map = { {"A",1}, {"B",2} };
std::string key = "A";

//C++20
//concept
template<typename T>
concept Addable = requires(T a, T b) {
	{a + b}->std::same_as<T>;
};
//範囲
auto doubled = numbers | std::views::transform([](int n) { return n * 2; });
int main() {
	//C++11以降
	//ラムダ式
	std::cout << sum(1, 2) << std::endl;

	//範囲ベースループ
	for (int num : numbers) {
		std::cout << num ;
	}
	std::cout<<std::endl;

	//C++17以降
	//ifとswitchの初期化
	if (auto it = my_map.find(key); it != my_map.end()) {
		// use 'it' here
	}

	//構造化バインディング
	for (const auto& [key, value] : my_map) {
		//use 'key' and 'value' here
	}

	return 0;
}