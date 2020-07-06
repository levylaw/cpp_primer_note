#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
using std::cin;using std::cout;using std::endl;

const string &mans(string &s) {
	string v = "empty";
	s = v;
	return s;
};

int main(){
	string a;
	mans(a);
	cout << "&a is " << &a << endl;
	cout << "a is " << a << endl;
	
	decltype(&mans(a)) r;		//&s=a（此处形参s(局部引用变量)绑定到实参a上）
								//s=v（通过引用s修改a的值）.函数mans()返回引用s，也即返回a
								//&mans()即 &(mans()),也即a的指针，因此r为指针变量
	cout << "type of r is " << typeid(r).name() << endl;
	r = &mans(a); 
	cout << "r is " << r << endl;
	
	decltype(mans(a)) b =mans(a); //b是引用变量，b=s（b绑定在更原始的a上）
	cout << "type of b is " << typeid(b).name() << endl; //引用变量的类型用typeid打印出来依然是其引用对象的类型
	cout << "&b is " << &b << endl;
	cout << "b is " << b << endl;

	return 0;
}