#include<iostream>
#include"example.h"
#include<memory>

void Example::printMessage() {
	std::cout << "Hello, code splitting!" << std::endl;
}
int main() {
	//普通に宣言
	//スタックに積まれる
	Example obj;
	obj.printMessage();

	//ポインタ
	//ヒープに詰まれる
	Example* ptr = new Example();
	ptr->printMessage();
	delete ptr;

	//ポインタ
	//スタックに詰まれる
	//newとdeleteがいらない
	Example* obj_ptr = &obj;
	obj_ptr->printMessage();

	//スマートポインタ
	//スタックに積まれる
	 std::unique_ptr<Example> unique= std::unique_ptr<Example>();
	//あるいは　 
	//auto unique = std::unique_ptr<Example>();
	unique->printMessage();
}