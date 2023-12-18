#include<iostream>
#include<vector>
#include <list>
#include <map>
#include <unordered_map>

int main() {
	//ベクター
	std::vector<int> vec = { 1,2,3,4,5 };

	vec.push_back(6);//最後の要素に6を追加

	std::cout << "Vector container:";
	for (int x : vec) {
		std::cout << ' ' << x;
	}
	std::cout << std::endl;

	//リスト
	std::list<int> list = { 1,2,3,4,5 };

	list.push_back(6);//最後の要素に6を追加

	std::cout << "List container:";
	for (int x : list) {
		std::cout << ' ' << x;
	}
	std::cout << std::endl;

	//map
	std::map<std::string, int> m;
	
	m["one"] = 1;
	m["two"] = 2;

	std::cout << "Map contains:" << std::endl;
	for (const auto &pair : m) {
		std::cout << pair.first << ":" << pair.second << std::endl;
	}

	//Unordered_map
	std::unordered_map<std::string, int>um;

	um["one"] = 1;
	um["two"] = 2;

	std::cout << "Unordered map cotains:" << std::endl;
	for (const auto& pair : um) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}
}