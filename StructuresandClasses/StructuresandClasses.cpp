#include<iostream>
//構造体の定義
struct Employee {
	//構造体のメンバー
	//デフォルトで公開
	int id;
	std::string name;
	float salary;
};
Employee e1;

//クラスの定義
class Student {
	//メンバー
	//デフォルトで非公開
	int roll_no;
	std::string name;
	float marks;
	
	//アクセス用パブリックメンバー関数
public:
	void set_data(int r, std::string n, float m) {
		roll_no = r;
		name = n;
		marks = m;
	}

	void display() {
		std::cout << "Roll no: " << roll_no
			<< "\nName: " << name
			<< "\nMarks: " << marks << std::endl;

	}
};
Student s1;


int main() {
//構造体にアクセス
	e1.id = 1;
	e1.name = "John Doe";
	e1.salary = 40000;
	

//クラスにアクセス
	s1.set_data(1,"Alice",95.0);
	s1.display();

}