#include<iostream>

//�I�u�W�F�N�g�̗L������

//�ÓI�X�g���[�W����
//�O���[�o���ϐ��A�ÓI�f�[�^�����o�[�A�ÓI���[�J���ϐ��Ȃǂ�
//�v���O�������s���Ɋ���U���
//�v���O�����I�����ɉ�������܂�
int glovalVar;
class Myclass {
	static int static_var;
};
void myFunction() {
	static int local_var;
}

//�X���b�h�X�g���[�W����
//���̃I�u�W�F�N�g�̑�����X���b�h��
//�������Ԓ����݂ł���
thread_local int my_var;

//�����X�g���[�W����
//�錾���ꂽ�X�R�[�v���I������Ɣj��
void myFunction2() {
	int local_var;
}


int main() {
	//���I�X�g���[�W����
	//�����������͂���Ȃ��̂Ŏ蓮�ōs��
	//��߂�ߖY���ׂ��炸
	int* ptr = new int;
	delete ptr;
	return 0;
}