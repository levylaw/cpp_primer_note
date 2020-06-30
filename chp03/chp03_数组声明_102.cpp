#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int a = 1, b = 2, c = 3;
	int* pa = &a, * pb = &b, * pc = &c;
	//声明一个包含3个整型指针要素的数组
	int* ptrs[3] = { pa,pb,pc };
	//for (auto& p : ptrs)，这里是否使用引用类型都可以
	//但如果为114页情况，则必须使用引用类型
	for (auto p : ptrs)
		cout << "p is " << p << "  "
		<< "*p is " << *p << endl;

	int arr[3] = { 1,2,3 };
	//声明一个含三个整型的数组的指针
	//数组元素类型 + (声明的对象，此处为数组的指针)+ [数组的纬度] = 用于初始化的数组
	int(*parr)[3] = &arr;
	cout << "parr is " << parr << endl;

	//声明一个含三个整型指针的数组的指针
	int* (*pptrs)[3] = &ptrs;
	cout << "Array ptrs's pointer is  " << pptrs << endl;

	/*
	int* ptrs[3] = { pa,pb,pc };
	没括号时 > 声明的是数组
	int(*parr)[3] = &arr;
	有括号时 > 声明的是指向数组的指针、或者绑定到数组的引用
	*/
	return 0;
}