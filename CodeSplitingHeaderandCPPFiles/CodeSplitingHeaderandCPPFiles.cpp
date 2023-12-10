#include<iostream>
#include"example.h"
#include<memory>

void Example::printMessage() {
	std::cout << "Hello, code splitting!" << std::endl;
}
int main() {
	//���ʂɐ錾
	//�X�^�b�N�ɐς܂��
	Example obj;
	obj.printMessage();

	//�|�C���^
	//�q�[�v�ɋl�܂��
	Example* ptr = new Example();
	ptr->printMessage();
	delete ptr;

	//�|�C���^
	//�X�^�b�N�ɋl�܂��
	//new��delete������Ȃ�
	Example* obj_ptr = &obj;
	obj_ptr->printMessage();

	//�X�}�[�g�|�C���^
	//�X�^�b�N�ɐς܂��
	 std::unique_ptr<Example> unique= std::unique_ptr<Example>();
	//���邢�́@ 
	//auto unique = std::unique_ptr<Example>();
	unique->printMessage();
}