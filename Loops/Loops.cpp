#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	
	{
	cout << "for loop" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << " ";
	}
	cout << endl;

	}
	
	{
		int i = 0;

		cout << "while loop" << endl;
		while (i < 5) {
			cout << i << " ";
			i++;
		}
		cout << endl;
	}

	{
		int i = 0;
			cout << "do while loop" << endl;
		do {
			cout << i << " ";
			i++;
		} while (i < 5);

		return 0;
	}

	return 0;
}