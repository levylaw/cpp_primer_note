#include <iostream>
int main() {
	//decltype最大的特点：具有引用类型，例如int&
	int i = 42, * p = &i, & r = i;
	int j = 1, & rj = j;
	//r是一个引用，因此这里a被声明为int&类型，必须被初始化为整型引用类型
	decltype(r) a = rj;
	std::cout << "a is " << a << std::endl;
	std::cout << "i is " << i << std::endl;
	std::cout << "r is " << r << std::endl;

	//这里b被声明为r指向的int类型，可以不被初始化
	decltype(r + 0) b;
	std::cout << "&b is " << &b << std::endl;

	//decltype()内的表达式如果是解引操作，将返回引用类型
	decltype(*p) c = rj;
	std::cout << "c is " << c << std::endl;

	//decltype()内的表达式如果是(变量)，将返回引用类型
	decltype((i)) d = rj;
	std::cout << "d is " << d << std::endl;
	//decltype()内的表达式如果是引用，也将返回引用类型
	return 0;
}