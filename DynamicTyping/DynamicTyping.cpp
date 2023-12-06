#include <iostream>
#include <any>

int main() {
	using std::string;
	using std::cout;
	using std::endl;

	int  x = 42;
	float y = 3.14f;
	string z = "Hello, World";
	//ポインタ
	void* void_ptr;

	void_ptr = &x;//アドレス受け渡し
	cout << "int value: " << *(static_cast<int*>(void_ptr)) << endl;//int*で出力

	void_ptr = &y;//アドレス受け渡し
	cout << "float value: " << *(static_cast<float*>(void_ptr)) << endl;//double*で出力

	void_ptr = &z;//アドレス受け渡し
	cout << "string value: " << *(static_cast<string*>(void_ptr)) << endl;//string*で出力

	//any
	std::any any_value;//アドレス受け渡し不要なんでも入る

	any_value = 42;
	cout << "int value: " << (std::any_cast<int>(any_value)) << endl;//出力時にint型を指定

	any_value = 3.14;
	cout << "double value: " << (std::any_cast<double>(any_value)) << endl;//出力時にdouble型を指定

	any_value = string("Hello,world!");
	cout << "double value: " << (std::any_cast<string>(any_value)) << endl;//出力時にstring型を指定

	return 0;
}