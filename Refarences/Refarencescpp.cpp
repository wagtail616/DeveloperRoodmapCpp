#include<iostream>
void swap(int& a,int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	using std::cout;
	using std::endl;
	//参照
	int var = 10;
	int& ref = var;
	
	var = 20;
	cout << "ref =" << ref << endl;//varの変更が反映される
	
	ref = 30;
	cout << "var =" << var << endl;//refの変更もvarに反映される
	
	//関数パラメータ
	int x=5, y=10;
	cout << "x = " << x << " y = " << y<<endl;

	cout << "Swap!!" << endl;
	swap(x, y);
	cout << "x = " << x << " y = " << y << endl;


}