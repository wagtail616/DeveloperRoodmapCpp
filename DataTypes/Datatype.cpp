#include <iostream>
#include <string>

int main() {
	using std::string;
	using std::cout;
	using std::endl;
	//����
	int num = 42;
	//���������_
	float pi = 3.14f;
	//�{���x���������_
	double pi_high_precision = 3.1415926535;
	//����
	char latter = 'A';
	//�_���^
	bool is_cpp_great = true;

	//�z��
	int numbers[5] = { 1,2,3,4,5 };
	//�|�C���^
	{
		int num = 42;
		int* pNum = &num;//pNum��num�̃A�h���X�n��
	}
	//�Q��
	{
		int num = 42;
		int& numRef = num;
	}
	//�\��
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

	//���p��
	union Data {
		int num;
		char letter;
		float decimal;
	};

	Data myData;
	myData.num = 42;

	return 0;
}