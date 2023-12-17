#include<iostream>
#include <vector>
#include <forward_list>
#include <list>
int main() {
	//出力イテレータ
	std::vector<int>nums = { 1, 2, 3, 4 };
	std::istream_iterator<int> input(std::cin);
	std::copy(input, std::istream_iterator<int>(), std::back_inserter(nums));
	//出力イテレータ
	std::ostream_iterator<int>output(std::cout, ",");
	std::copy(nums.begin(), nums.end(), output);
	//前方イテレータ
	{
	std::forward_list<int> nums = { 1, 2, 3, 4 };
	std::forward_list<int>::iterator itr = nums.begin();

	while (itr != nums.end()) {
		std::cout << *itr << " ";
		++itr;
	}
	}

	{
		//逆イテレータ
		std::list<int> nums = { 1,2,3,4,5 };
		std::list<int>::reverse_iterator itr = nums.rbegin();
		while (itr != nums.rend()) {
			std::cout << *itr << " ";
			++itr;
		}
	}
	//双方向イテレータ
	{
		std::list<int> nums = { 1,2,3,4 };
		std::list<int>::iterator itr;
		for (itr = nums.begin(); itr != nums.end(); ++itr) {
			std::cout << *itr<<" ";
		}
		for (--itr; itr != nums.begin(); --itr) {
			std::cout << *itr << "";
		}
	}
}
