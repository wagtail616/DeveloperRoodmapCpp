#include<iostream>
//�\���̂̒�`
struct Employee {
	//�\���̂̃����o�[
	//�f�t�H���g�Ō��J
	int id;
	std::string name;
	float salary;
};
Employee e1;

//�N���X�̒�`
class Student {
	//�����o�[
	//�f�t�H���g�Ŕ���J
	int roll_no;
	std::string name;
	float marks;
	
	//�A�N�Z�X�p�p�u���b�N�����o�[�֐�
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
//�\���̂ɃA�N�Z�X
	e1.id = 1;
	e1.name = "John Doe";
	e1.salary = 40000;
	

//�N���X�ɃA�N�Z�X
	s1.set_data(1,"Alice",95.0);
	s1.display();

}