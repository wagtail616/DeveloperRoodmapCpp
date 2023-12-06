#include <iostream>
#include <string>

int main() {
	using std::string;
	using std::cout;
	using std::endl;
	//整数
	int num = 42;
	//浮動小数点
	float pi = 3.14f;
	//倍精度浮動小数点
	double pi_high_precision = 3.1415926535;
	//文字
	char latter = 'A';
	//論理型
	bool is_cpp_great = true;

	//配列
	int numbers[5] = { 1,2,3,4,5 };
	//ポインタ
	{
		int num = 42;
		int* pNum = &num;//pNumにnumのアドレス渡す
	}
	//参照
	{
		int num = 42;
		int& numRef = num;
	}
	//構造
	struct Person1 {
		string name;
		int age;
		float height;
	};
	Person1 p1 = { "John Doe", 30 ,5.9 };
	//class
	class Person2 {
	public:
		string name;
		int age;

		void printInfo() {
			cout << "Name: " << name << ",Age: " << age << endl;
		};
	};
	Person2 p1;
	p1.name = "John Doe"; 
	p1.age = 30;

	//共用体
	union Data {
		int num;
		char letter;
		float decimal;
	};

	Data myData;
	myData.num = 42;

	return 0;
}