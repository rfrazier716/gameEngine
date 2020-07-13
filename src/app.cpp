#include <iostream>
#include <Windows.h>

template<class T>
void log(T item)
{
	std::cout << item << std::endl;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR lpCmdLine, INT nCmdShow)
{
	std::cout << "Hello World" << std::endl;
	return 0;
}