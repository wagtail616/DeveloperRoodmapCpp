#include<algorithm>
#include<iostream>
#include<ranges>
#include<vector>

#include<coroutine>
#include<future>

//コンセプト
template <typename T>
concept Addable = requires (T a, T b) {
	{ a + b } -> std::same_as<T>;
};

template<Addable T>
T add(T a, T b) {
	return a + b;
}

/*エラーが出る
//coroutaimes
std::future<int> async_value(int value) {
	co_await std::chrono::seconds(1);
	co_return value * 2;
}
*/

//constexprとcoonsteval
constexpr int add(int a, int b) {
	return a + b;
}
consteval int square(int x){
return x * x;
}

int main() {
	//範囲
	std::vector<int> numbers = { 1,2,3,4,5 };

	auto even_numbers = numbers | std::views::filter([](int n) {return n % 2 == 0; });

	for (int n : even_numbers) {
		std::cout << n << ' ';
	}
	/*
	//Coroutines
	auto result = async_value(42);
	std::cout << "Result: " << result.get() << std::endl;
	*/
	constexpr int result1 = add(3, 4);
	int result2 = add(5, 6);
	constexpr int result3 = square(7);

}