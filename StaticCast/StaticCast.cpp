#include <iostream>

class Base{/*�E�E�E*/ };
class Derived :public Base{/*�c*/ };

int main() {
	//�X�^�e�B�b�N�L���X�g�\��
	//static_cast<new_type>(expression);

	//�������t���[�g�ɃL���X�g
	int i = 42;
	float f = static_cast<float>(i);
	
	//�p���K�w���̗l�X�ȃI�u�W�F�N�g�^�C�v�̃|�C���^���L���X�g
	Base* bptr = new Derived;
	Derived* bptr = static_cast<Derived*>(bptr);

	delete bptr;

	//������񐔂ɕϊ�
	enum Color{RED,GREEN,BLUE};
	int value = 1;
	Color color = static_cast<Color>(value);
	return 0;
	//�قȂ�I�u�W�F�N�g�^�C�v�Ԃ�
	//�|�C���^���L���X�g����ꍇ
	//�|�C���^�̌��̃^�C�v���^�[�Q�b�g�^�C�v�g��v���Ȃ��ꍇ�A
	//�\�����Ȃ����삪��������\��������܂��B

}