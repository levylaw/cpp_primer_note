#include <iostream>
int main() {
	int i = 0, &r = i;
	// i是整型，r是整型i的引用
	const int ci = i, &cr = ci;
	// ci是整型常量，cr是整型常量的引用
	auto a = r;
	//a是整型
	auto b = ci;
	//b是整型，不是整型常量（忽略顶层const）
	const auto f = ci;
	//f是整型常量
	auto &g = ci;
	//g是整型常量的引用，等同于 "const &g =ci; "（保留顶层const）
	const auto &j = 42;
	//j是常量引用，可以绑定字面值，绑定后为整型常量引用

	auto c = cr;
	//c是整型，不是整型常量

	auto d = &i;
	//d是整型指针
	auto e = &ci;
	//e是指向整型常量的指针（保留底层const）
	
	auto &m = ci, *p = &ci;
	//相当于 const int &m = &ci, const int *p =&ci
	//数据类型一致，可以同时定义
	/*
	auto &n = i, *p2 = &ci;
	错误，因为数据类型不一致，不能同时使用auto定义：
	int &n = i;
	const int *p2 = &ci;
	*/
	return 0;
}