#include<iostream>
#include<vector>

auto add(int x, int y) {
	return x + y;
}

int main() {
	int myInt = 5;
	
	//�{��
	auto myAutoInt = 5;
	
	//�x�N�^�[
	std::vector<int>myVector = { 1,2,3,4,5 };

	//auto �Ƀx�N�^�[����
	for (auto it = myVector.begin(); it != myVector.end(); ++it) {
		std::cout << *it << std::endl;
	}

	//auto�^�͉��炩�̌^�ŏ��������Ȃ��ƃG���[
	//auto myvar;

	

}