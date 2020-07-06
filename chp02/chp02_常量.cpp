#include <iostream>

int main() {
	std::cout << "常量引用：不允许通过对引用操作改变对象的值 " << std::endl;
	std::cout << "          但可以直接改变对象的值 " << std::endl;
	int val = 32;
	const int &val_ref = val;
	std::cout << "val_ref is " << val_ref << std::endl;
	val = 16;
	std::cout << "after changing val, val_ref is " << val_ref << std::endl;

	std::cout << "指向常量的指针：不允许通过对指针操作改变对象的值 " << std::endl;
	std::cout << "                但可以直接改变对象的值 " << std::endl;
	double pi =3.14;
	const double *ptr = &pi;
	std::cout << "*ptr is " << *ptr << std::endl;
	pi = 3.1415;
	std::cout << "after changing pi, *ptr is " << *ptr << std::endl;

	std::cout << "且作为指针，总是可以改变其指向的对象 " << std::endl;
	const int val_2 = 6;
	const int *val_2_ptr = &val_2;
	std::cout << "*val_2_ptr is " << *val_2_ptr << std::endl;
	int val_3 = 7;
	val_2_ptr = &val_3; //修改指针指向的对象，不是*val_2_ptr = &val_3;
	std::cout << "after pointing to val_3, *val_2_ptr is " << *val_2_ptr << std::endl;

	std::cout << "常量指针：指针本身是个常量地址 " << std::endl;
	std::cout << "          不允许改变指针的指向 " << std::endl;
	int errNum = 0;
	int *const curErr = &errNum;
	std::cout << "*curErr is " << *curErr << std::endl;

	return 0;
}