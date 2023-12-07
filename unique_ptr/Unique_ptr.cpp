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
		//unique_ptrの作成
		std::unique_ptr<int> p1(new int(5));
		std::unique_ptr<int> p2 = std::make_unique<int>(10);

		std::cout << *p1 << ", " << *p2 << std::endl;
		//スマートポインタのためスコープ外で解放される
	}
	{
		//所有権の譲渡
		std::unique_ptr<int> p1(new int(5));
		std::unique_ptr<int> p2 = std::move(p1);//所有権がp1からp2に移動

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