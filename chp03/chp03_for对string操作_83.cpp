#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s("Come as you are!!!");
	cout << "统计标点个数" << endl;
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s) {
		if (ispunct(c))
			++punct_cnt;
	};
	cout << punct_cnt << " punctuation characters in "
		<< s << endl;
	
	cout << "变换大小写" << endl;
	for (auto& c : s) {
		c = toupper(c);
	}
	cout << s << endl;

	s ="Come as you are!!!";
	cout << "将第一个单词变成大写" << endl;
	for (decltype(s.size()) index = 0;
		index != s.size() && !isspace(s[index]);
		++index)
		s[index] = toupper(s[index]);
	cout << s << endl;
	return 0;
}