#include<iostream>
#include<memory>

class MyString {
public:
	MyString(const std::string& str) : data(std::make_shared<std::string>(str)) {}

	//�R�s�[���邽�߂ɋ��L���������f�[�^���g��
	MyString(const MyString& other) : data(other.data) {
		std::cout << "Copied using the Copy-Write idiom." << std::endl;
	}
	//�f�[�^��ύX����ꍇ�̂݃R�s�[���쐬
	void write(const std::string& str) {
		//�����̎Q�Ƃ����邩�m�F����
		if (!data.unique()) {
			data = std::make_shared <std::string>(*data);
			std::cout << "Copy is actually made for writng";
		}
		*data = str;
	}
private:
	std::shared_ptr<std::string> data;
};

int main() {
	MyString str1("Hello");
	MyString str2 = str1;//�Q�Ƃ����L������

	str1.write("Hello,Wolrd!");
}