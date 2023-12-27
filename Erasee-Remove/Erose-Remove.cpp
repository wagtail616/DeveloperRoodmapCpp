#include<algorithm>
#include<vector>
#include<iostream>




int main() {
	std::vector<int> numbers = { 1,2,3,4,3, };

	//Remove all occurrences of 3 from the vector
	numbers.erase(std::remove(numbers.begin(), numbers.end(), 3), numbers.end());

	for (int number : numbers) {
		std::cout << number << " ";
	}
}
