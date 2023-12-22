#include<iostream>
#include<type_traits>

template<typename T>
typename std::enable_if < std::is_arithmetic<T>::value, T>::type find_max(T a, T b) {
	return a > b ? a : b;
}

int main() {
	int a;
	int* a_ptr = &a;
	//is_pointer‚Åpointer‚©”»’è‚µboolalpha‚ÅT/F‚Åo—Í
	std::cout << "Is 'a' a pointer?" << std::boolalpha 
		<< std::is_pointer<decltype(a)>::value << std::endl;

	std::cout << "Is 'a_ptr' a pointer?" << std::boolalpha
		<< std::is_pointer<decltype(a_ptr)>::value << std::endl;

	int max = find_max(10, 20);
	std::cout << "Max: " << max << std::endl;

	return 0;

}