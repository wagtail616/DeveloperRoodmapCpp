#include<iostream>
#include<memory>
struct MyDeleter {
	void operator()(int* ptr) {
		std::cout << "Custom Deleter: Deleting pointer" << std::endl;
		delete ptr;
	}
};
int main() {
	{
		//unique_ptr�̍쐬
		std::unique_ptr<int> p1(new int(5));
		std::unique_ptr<int> p2 = std::make_unique<int>(10);

		std::cout << *p1 << ", " << *p2 << std::endl;
		//�X�}�[�g�|�C���^�̂��߃X�R�[�v�O�ŉ�������
	}
	{
		//���L���̏��n
		std::unique_ptr<int> p1(new int(5));
		std::unique_ptr<int> p2 = std::move(p1);//���L����p1����p2�Ɉړ�

		if (p1) {
			std::cout << "p1 owns the object" << std::endl;
		}
		else if(p2){
			std::cout << "p2 owns the object" << std::endl;
		}
	}
	std::unique_ptr<int, MyDeleter> p1(new int(5), MyDeleter());
	return 0;

}