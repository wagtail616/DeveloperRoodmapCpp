#include<iostream>
#include<memory>
void create_memory_leak() {
//int* ptr = new int[100];

	//もしこのまま実行するとdeleteがないので
	//メモリリークが発生してしまう。
}

void no_memory_leak() {
	//C++スマートポインター、RALL手法、コンテナーなどでは
	//スコープ外になれば割り当てが解除される
	std::shared_ptr<int[]> ptr = std::make_shared<int[]>(100);
}

int main(){

}