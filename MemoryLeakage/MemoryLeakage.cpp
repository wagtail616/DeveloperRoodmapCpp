#include<iostream>
#include<memory>
void create_memory_leak() {
//int* ptr = new int[100];

	//�������̂܂܎��s�����delete���Ȃ��̂�
	//���������[�N���������Ă��܂��B
}

void no_memory_leak() {
	//C++�X�}�[�g�|�C���^�[�ARALL��@�A�R���e�i�[�Ȃǂł�
	//�X�R�[�v�O�ɂȂ�Ί��蓖�Ă����������
	std::shared_ptr<int[]> ptr = std::make_shared<int[]>(100);
}

int main(){

}