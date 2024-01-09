#include <iostream>
#include<vector>
#include<ranges>
#include <coroutine>
#include "newest.h"
//テンプレート
template<typename T>
concept Printable = requires(T x) {
	{std::cout << x << '\n'};
};

template<Printable T>
void print(const T& x) {
	std::cout << x << '\n';
}

//genaratorは未対応？

/*エラー
//Constexprの強化
struct Point {
	constexpr Point(int x, int y) : x_{ x }, y_{ y } {}
	int x_, y_;
};

constexpr auto create_points() {
	Point points[3]{};

	for (int i = 0; i < 3; ++i) {
		points[i] = Point{ i, i * i };
	}

	return points;
}

constexpr auto points = create_points();
*/
int main() {
//範囲
	std::vector<int> numbers{ 1,2,3,4,5 };
	auto even_view = numbers | std::views::filter([](int n) {return n % 2 == 0; });

	for (int n : even_view) {
		std::cout << n << ' ';
	}

	//テンプレート付きのラムダ
	auto sum = [](auto a, auto b) {
		return a + b;
	};

	int res1 = sum(1, 2);
	double  res2 = sum(1.0, 2.0);


}