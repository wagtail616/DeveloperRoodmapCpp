class NonCopyable {
public:
	NonCopyable() = default;
	~NonCopyable() = default;

	//�R�s�[�R���X�g���N�^�̍폜
	NonCopyable(const NonCopyable&) = delete;

	//�R�s�[�A�V�X�g�R���X�g���N�^���폜
	NonCopyable& operator=(const NonCopyable&) = delete;
};
class MyClass :private NonCopyable {
	//MyClass�͍��̓R�s�[�o���Ȃ�
};
int main() {
	return 0;
}