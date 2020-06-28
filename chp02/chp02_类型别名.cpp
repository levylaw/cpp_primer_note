#include <iostream>
int main() {
	typedef double* double_ptr_type;
	//double_ptr_type 是一个指向double对象的指针类型
	double wages = 7.5;
	double_ptr_type wages_p = &wages;
	//所以不需要写成 "*double_ptr_type"
	//相当于 "double* wages_p = &wages"
	std::cout << "wages is " << std::endl;
	std::cout << wages << std::endl;
	std::cout << "wages_p is " << std::endl;
	std::cout << wages_p << std::endl;
	std::cout << "*wages_p is " << std::endl;
	std::cout << *wages_p << std::endl;
	
	return 0;
}
