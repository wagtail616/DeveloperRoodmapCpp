#include <iostream>
#include<vector>
#include<deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
int main() {
	//�R���e�i
	//�V�[�P���X�R���e�i
	//���I�z��
	std::vector<int> myVector;
	//��d�Ƀ����N���ꂽ���X�g
	std::initializer_list<int>my_list;
	//���[�L���[
	std::deque<int>my_deque;

	//�A�z�R���e�i
	//�L�[�Ń\�[�g���ꂽ��ӂ̗v�f�̃R���N�V����
	std::set<int>my_set;
	//�L�[�Ń\�[�g���ꂽ�L�[�ƒl�̃y�A�̃R���N�V����
	std::map<std::string, int> my_map;

	//�������̘A�z�R���e�i
	//����̏����ň�ӂ̗v�f�̃R���N�V����
	std::unordered_set<int> my_unodered_set;
	//����̏����ł̃L�[�ƒl�̃y�A�̃R���N�V����
	std::unordered_map<std::string, int>my_unordered_map;

	//�R���e�i�A�_�v�^�[
	//LIFO�f�[�^�\��
	std::stack<int> my_stack;
	//FIFO�f�[�^�\��
	std::queue<int>my_queue;
	//�x�N�g���܂���deque�Ɋ�Â��ă\�[�g���ꂽ�L���[
	std::priority_queue<int>my_priority_queue;

	//�A���S���Y��
	//�x�N�g���̃\�[�g
	std::vector<int> my_vec={4,2,5,1,3};
	std::sort(my_vec.begin(), my_vec.end());

	//����
	for (auto it = my_vec.begin(); it != my_vec.end(); ++it) {
		std::cout << *it << " ";
	}
}