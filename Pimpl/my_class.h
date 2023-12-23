#pragma once

class MyClass_Impl;//前方宣言

class MyClass {
public:
	MyClass();
	~MyClass();
	void some_method();
private:
	MyClass_Impl* pimpl;//ポインター実装
};