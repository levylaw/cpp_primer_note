#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int find_char(const string &s,
			  char c,
			  string::size_type &occurs) {
	//内部变量ret返回该字符第一次出现的位置，通过return直接返回
	//形参occurs存储该该字符出现的次数
	//通过对函数外的实参进行引用和修改，隐式地返回值
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size()) {
				//如果ret还等于字符串长度时，证明是首次找到目标
				//因为紧接下来就要把i赋值给ret
				ret = i;
			}
			++occurs;
		}
	}
	return ret;
}

int main() {
	const string s = { "abcdefgabcdefg" };
	string::size_type cnt;
	char j;
	cin >> j;
	cout << "The string is " << s << endl;
	cout << j << " is in the position of " 
		<< find_char(s,j,cnt) << endl;
	cout << j << "occurs " << cnt << " times!" << endl;
	return 0;
}