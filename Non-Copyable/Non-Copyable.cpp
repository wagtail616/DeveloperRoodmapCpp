class NonCopyable {
public:
	NonCopyable() = default;
	~NonCopyable() = default;

	//コピーコンストラクタの削除
	NonCopyable(const NonCopyable&) = delete;

	//コピーアシストコンストラクタも削除
	NonCopyable& operator=(const NonCopyable&) = delete;
	//この二つを削除することで明示的にコピー不可を示せる
};
class MyClass :private NonCopyable {
	//MyClassは今はコピー出来ない
};
int main() {
	return 0;
}