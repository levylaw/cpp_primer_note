#include<iostream>
using namespace std;
float temp;
float fn1(float r) {
    temp = r * r * 3.14;
    return temp;
}
float& fn2(float r) { //&说明返回的是temp的引用，换句话说就是返回temp本身
    temp = r * r * 3.14;
    return temp;
}
int main1() {
    float a = fn1(5.0); //case 1：返回值
    //float &b=fn1(5.0); //case 2:用函数的返回值作为引用的初始化值 [Error] invalid initialization of non-const reference of type 'float&' from an rvalue of type 'float'
                           //（有些编译器可以成功编译该语句，但会给出一个warning） 
                           // 改为 fn1(5.0);float& b = temp; 则可编译
    float c = fn2(5.0);//case 3：返回引用
    float& d = fn2(5.0);//case 4：用函数返回的引用作为新引用的初始化值
    cout << a << endl;//78.5
    cout<<b<<endl;//78.5
    cout << c << endl;//78.5
    cout << d << endl;//78.5
    return 0;
}
