#include<iostream>

namespace animals {//���O���
	std::string dog = "Bobby";
	std::string cat = "Lilly";
}
namespace outer {//���O��Ԃ̃l�X�g
	int x = 10;
	namespace innner {
		int y = 20;
	}
}

int main() {
	//���O��Ԃ̌Ăяo��
	std::cout << "A dog name:" << animals::dog << std::endl;
	std::cout << "A cat name:" << animals::cat << std::endl;
	//�l�X�g���ꂽ���O��Ԃ̌Ăяo��
	std::cout << "Outer x:" << outer::x << std::endl;
	std::cout << "inner y:" << outer::innner::y << std::endl;

	using animals::dog;//���O��Ԃ̏ȗ�
	std::cout << "A dog name:" << dog << std::endl;

}