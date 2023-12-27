#include<iostream>
class String {
	//クラスのリスト

public:

	void swap(String& other) {
		using std::swap;
		swap(size_, other.size_);
		swap(buffer_, other.buffer_);
	}
	String& operator=(String other) {
		swap(other);
		return *this;
	}
private:
	int size_=0;
	int buffer_=0;
};
int main() {
	String MyString1, MyString2;
	MyString1.swap(MyString2);
	MyString1 = MyString2;
}