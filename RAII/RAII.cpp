//RAII

//動的配列
#include <mutex>
class ManagedArray {
public:
	ManagedArray(size_t size) : size_(size), data_(new int[size]) {

	}
	~ManagedArray() {
		delete[] data_;
	}

	//Access function
	int& operator [](size_t i) {
		return data_[i];
	}
private:
	size_t size_;
	int* data_;
};

//ロック
std::mutex some_mutex;

class Lock{
public:
	Lock(std::mutex& mtx): mutex_(mtx) {
		mutex_.lock();
	}
	~Lock() {
		mutex_.unlock();
	}
private:
	std::mutex& mutex_;
};

void protected_function() {
	Lock lock(some_mutex);

}

int main() {
	ManagedArray arr(10);
	arr[0] = 42;


}