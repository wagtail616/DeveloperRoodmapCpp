#include<iostream>
#include <vector>
#include <thread>
//C++14
//可変テンプレート
template<typename T>
constexpr T pi = T(3.1415926535897932385);
float r = pi<float>;
double d = pi<double>;

int main() {
	//自動でコンパイラが変数タイプを予測
	auto integer = 42;
	auto floating = 3.14;

	//範囲ベースループ
	std::vector<int> numbers{ 1,2,3,4 };

	//ラムダ関数
	auto add = [](int a, int b)-> int {return a + b; };
	int sum = add(42, 13);

	//nullptr Nullポインターの表記では一番安全
	int* ptr = nullptr;

	//スレッドサポートライブラリ
	std::thread t([]() {std::cout << "Hello from another thread\n"; });
	t.join();

	//C++14以降
	// ジェネリックラムダ
	auto add2 = [](auto a, auto b) {return a + b;};
	auto sum_i = add2(42, 13);
	auto sum_j = add2(3.14,2.72);
	

	//バイナリーリテラル
	int c = 0b110101;

	//decltype
	//変数のタイプを初期化されたしきのタイプと一致するように減衰します
	auto func = [](auto a, auto b) {return a * b; };
	decltype(auto) result = func(5, 3.14);

}