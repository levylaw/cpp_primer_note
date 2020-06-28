#include <iostream>
int main1() {
	std::cout << "声明引用和指针 以及 取址操作和解引操作" << std::endl;
	//initialize a variable
	int ival = 1024;
	//create a reference
	int& ival_ref = ival;
	std::cout << "ival_ref is " << ival_ref << std::endl;
	//declare a pointer variable and initialize it
	// * is a type-modification symbol in declaration here, & is a operation symbol here
	// p stores the address while & takes the address out from ival_ref
	int* p = &ival_ref;
	std::cout << "p is " << p << std::endl;
	std::cout << "&val_ref is " << &ival_ref << " too!" << std::endl;
	//* is a dereference operation symbol here
	std::cout << "*p is " << *p << std::endl;

	std::cout << "\n初始化空指针" << std::endl;
	int* p1 = nullptr;
	std::cout << "p1 is " << p1 << std::endl;
	int* p2 = 0;
	std::cout << "p2 is " << p2 << std::endl;
	//std::cout << "*p1 is " << *p1 << std::endl;
	//std::cout << "*p2 is " << *p2 << std::endl;
	//空指针好像不能解引输出值

	std::cout << "\n指针赋值" << std::endl;
	p1 = p;
	std::cout << "after p1 = p,p1 is now  " << p << std::endl;
	std::cout << "and *p1 is now  " << *p1 << std::endl;

	std::cout << "\n指向指针的指针" << std::endl;
	int ival_2 = 1024;
	int* pi = &ival_2;
	int** ppi = &pi;
	std::cout << "the original value: " << ival_2 << std::endl;
	std::cout << "the indirect value: " << pi << std::endl;
	std::cout << "doubly indirect value: " << ppi << std::endl;
	std::cout << "use doubly indirect value to get the original value: "
		<< **ppi << std::endl;

	return 0;
}