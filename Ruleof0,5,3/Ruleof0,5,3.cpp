#include <iostream>

//��̃��[��
//�N���X�܂��͍\���̂�
//���\�[�X�𖾎��I�ɊǗ����Ȃ��ꍇ
//�f�R���X�g���N�^�A�R�s�[�R���X�g���N�^�Ȃ�
//���ʂȃ����o�[���`���ׂ��ł͂Ȃ�
struct MyResouce{
	std::string name;
	int value;
};

//�Q�̃��[��
//���\�[�X���Ǘ�����N���X�A�\���̂�
//����3�̃����o�[�@�\���`����K�v������
//Destructor
//Copy constructor
//Copy assignment operator
class MyResource {
public:
	//Constructor��Destruter
	MyResource() : data(new int[100]){}
	~MyResource() { delete[] data; }

	//CopyConstructor
	MyResource(const MyResource& other) : data(new int[100]) {
		std::copy(other.data,other.data+100,data);
	}

	//Copy assignment operator
	MyResource& operator=(const MyResource& other) {
		if (&other == this) { return *this; }
		std::copy(other.data, other.data + 100, data);
		return *this;
	}
	//�ނ̃��[��
	//�����2�̓��ʃ����o�[�@�\��ǉ����܂�
	
	//Move constructor
	MyResource(MyResource&& other) noexcept :data(other.data) {
		other.data = nullptr;
	}

	//Move assignment operato
	MyResource& operator=(MyResource&& other)noexcept {
		if (&other == this) { return *this; }
		delete data;
		data = other.data;
		other.data = nullptr;
		return *this;
	}

private:
	int* data;
};

int main() {

}