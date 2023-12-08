#include<iostream>

class MyClass {
public:
	void Dosomething() {
		std::cout << "Doing somothing...\n";
	}
};

int main() {
	std::weak_ptr<MyClass> weak;

	{
		std::shared_ptr<MyClass>shared = std::make_shared<MyClass>();
		weak = shared;

		if (auto sharedFromWeek = weak.lock()) {
			sharedFromWeek->Dosomething();//�I�u�W�F�N�g�����S�Ɏg��
			std::cout << "Shared uses count:" << sharedFromWeek.use_count() << std::endl;// 2

		}
	}
	// shred�̓X�R�[�v�O�ɂȂ�AMyClass�I�u�W�F�N�g�͔j������܂��B

	if (auto sharedFromWeak = weak.lock()) {
		//�I�u�W�F�N�g���j������邽�߂����͎��s����Ȃ�
	}
	else {
		std::cout << "Object has been destroyed" << std::endl;
	}
	return 0;
}
