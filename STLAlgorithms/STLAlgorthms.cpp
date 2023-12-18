#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	//ƒ\[ƒg
	//std::sort
	std::vector<int> nums = { 1,10,5,2,9,7,3,8,4,6 };
	
	//¸‡
	std::sort(nums.begin(), nums.end());
	for (int num : nums) {
		std::cout << num << ' ';
	}
	std::cout << std::endl;

	//ŒŸõ
	//std::find
	auto it =std::find(nums.begin(), nums.end(),9);

	if (it !=nums.end()) {
		std::cout << "Found 9 at position: " << (it - nums.begin())<<std::endl;
	}
	else {
		std::cout << "9 not found"<<std::endl;
	}

	nums.erase(std::remove(nums.begin(), nums.end(), 6), nums.end());

	for (int num : nums) {
		std::cout<< num << ' ';
	}
}