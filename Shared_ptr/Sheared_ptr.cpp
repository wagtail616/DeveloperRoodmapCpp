#include<iostream>
#include<memory>
class MyClass {
public:
	MyClass() { std::cout << "�����Ńf�[�^��L." << std::endl; }
	~MyClass() { std::cout << "�����Ńf�[�^�j��." << std::endl; }
};

int main() {
	//���p�|�C���^�[���쐬����myClass�I�u�W�F�N�g�Ƃ��ĊǗ�
	std::shared_ptr<MyClass> ptr1(new MyClass());
	{
		//�ʂ̋��L�|�C���^���쐬���A�ȑO�ɍ쐬�����|�C���^�ŏ��������܂��B
		std::shared_ptr<MyClass> ptr2 = ptr1;

		std::cout << "�����̓X�R�[�v����" << std::endl;
		//�����̃|�C���^�������I�u�W�F�N�g�����L���A�Q�Ɛ���2�ɂȂ�܂����B
	}
	std::cout <<"��������X�R�[�v�O��" << std::endl;
}