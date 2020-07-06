#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
using std::cin;using std::cout;using std::endl;

const string &manip() {
	return "empty";
};

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
	
	decltype(&mans(a)) r;		//r为指针变量，&s=a（此处局部引用变量s绑定到实参a上），s=v（通过引用s修改a的值）,返回引用s
	cout << "type of r is " << typeid(r).name() << endl;
	r = &mans(a); 
	cout << "r is " << r << endl;
	
	decltype(*mans(a)) p;		//r为指针变量，&s=a（此处局部引用变量s绑定到实参a上），s=v（通过引用s修改a的值）,返回引用s
	cout << "type of r is " << typeid(r).name() << endl;
	r = &mans(a); 
	cout << "r is " << r << endl;

	decltype(mans(a)) b =mans(a); //b是引用变量，b=s（即b=，其实是b绑定在更原始的a上）
	cout << "type of b is " << typeid(b).name() << endl; //引用变量的类型用typeid打印出来依然是其引用对象的类型
	cout << "&b is " << &b << endl;
	cout << "b is " << b << endl;

	string c =mans(a); //c是字符串，b=s（即b=，其实是b绑定在更原始的a上）
	cout << "type of c is " << typeid(c).name() << endl;
	cout << "&c is " << &c << endl;
	cout << "c is " << c << endl;
	
	string d("test");
	cout << "type of d is " << typeid(d).name() << endl;
	return 0;
}
	//s = manip(); 错误：manip()返回的是字面值"empty"的临时局部变量的引用， s =
	/*
	type of b is class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
	*/