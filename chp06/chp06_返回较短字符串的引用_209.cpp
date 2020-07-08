#include<iostream>
#include<string>
using namespace std;

const string& shorterString(const string& s1, const string& s2) {
    return s1.size() < s2.size() ? s1 : s2;
};

const string shorterString1(const string & s1, const string & s2) {
    return s1.size() < s2.size() ? s1 : s2;
    //虽然s1,s2是引用，但是函数返回的是string，所以实际返回的是引用的string值
}
int main() {
    string a("ab");
    string b("abc");
    cout << shorterString(a, b) << endl;
    cout << shorterString1(a, b) << endl;
    decltype(shorterString(a, b)) r1("f");
    //r1是引用
    //decltype(shorterString(a, b)) r1；无法通过编译
    decltype(shorterString1(a, b)) r2;//r2是字符串
    return 0;
}
