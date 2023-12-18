#include <iostream>
#include<thread>
#include <mutex>

std::mutex mtx;
void print_block(int n, char c) {
	std::unique_lock<std::mutex>loker(mtx);
	for (int i = 0; i < n; ++i) {
		std::cout << c;
	}
	std::cout << std::endl;

}

void my_function() {
	std::cout << "This function is executing in a separate thread"<<std::endl;
}
void print_sum(int a, int b) {
	std::cout << "The sum is: " << a + b << std::endl;
}

int main() {
	std::thread t(my_function);
	t.join();//スレッド完成まで待機

	std::thread t2(print_sum,3,5);
	t2.join();

	std::thread t3(print_block,50,'*');
	std::thread t4(print_block,50,'#');

	t3.join();
	t4.join();
	
	return 0;
}