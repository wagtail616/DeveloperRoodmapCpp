#pragma once

class MyClass_Impl;//�O���錾

class MyClass {
public:
	MyClass();
	~MyClass();
	void some_method();
private:
	MyClass_Impl* pimpl;//�|�C���^�[����
};