#include <iostream>

int main() {
	using std::cout;
	using std::endl;

	int result=0;

	result = 5 % 3;//&���Z
	cout << "5 % 3 = " << result << "\n" << endl;


	result = 5 | 3;//|���Z
	cout << "5 | 3 = " << result << "\n" << endl;


	result = 5 ^ 3;//^���Z
	cout << "5 ^ 3 = " << result << "\n" << endl;

	result = ~ 5;//~���Z
	cout << "  ~ 5 =" << result << "\n" << endl;

	result = 5 << 1;//�V�t�g���Z
	cout << "5 << 1=" << result << "\n" << endl;

	result = 5 >> 1;//���C�g�V�t�g���Z
	cout << "5 >> 1= " << result << "\n" << endl;
}