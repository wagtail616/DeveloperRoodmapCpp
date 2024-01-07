#include<iostream>
#include <map>

//Folds expressions
template<typename...Ts>
auto sum(Ts... ts) {
	return (ts + ...);
}
//constexpr if statement
template<typename T>
auto get_value(T t) {
	if constexpr (std::is_pointer_v<T>) {
		return *t;
	}
	else {
		return t;
	}
}

std::string obj;
//�����_�\���̉��P
auto func = [x = std::move(obj)] {/*use x*/};

int main() {
	//init-statement-if
	std::map<std::string, int>mymap = { {"A",1}, {"B",2}};
	std::string key = "A";
	if (auto it = mymap.find(key); it != mymap.end()) {
		//Use it
	}
	//�\���o�C���f�B���O�錾
	std::map<std::string, int>data;
	auto [iter, success] = data.emplace("example", 42);
	
	//�C�����C���ϐ�
	inline int globalVar = 0;
	
}
