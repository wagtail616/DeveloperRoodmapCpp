#include<iostream>
void swap(int& a,int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	using std::cout;
	using std::endl;
	//�Q��
	int var = 10;
	int& ref = var;
	
	var = 20;
	cout << "ref =" << ref << endl;//var�̕ύX�����f�����
	
	ref = 30;
	cout << "var =" << var << endl;//ref�̕ύX��var�ɔ��f�����
	
	//�֐��p�����[�^
	int x=5, y=10;
	cout << "x = " << x << " y = " << y<<endl;

	cout << "Swap!!" << endl;
	swap(x, y);
	cout << "x = " << x << " y = " << y << endl;


}