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
			sharedFromWeek->Dosomething();//オブジェクトを安全に使う
			std::cout << "Shared uses count:" << sharedFromWeek.use_count() << std::endl;// 2

		}
	}
	// shredはスコープ外になり、MyClassオブジェクトは破棄されます。

	if (auto sharedFromWeak = weak.lock()) {
		//オブジェクトが破棄されるためここは実行されない
	}
	else {
		std::cout << "Object has been destroyed" << std::endl;
	}
	return 0;
}
