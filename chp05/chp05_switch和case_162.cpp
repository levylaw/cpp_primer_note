#include <iostream>
using std::cin; using std::cout; using std::endl;
int main() {
	unsigned vowelcnt = 0, othercnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
		//case标签必须是整型常量表达式
		case 'a':case 'e':case 'i':case 'o':case 'u':
			++vowelcnt;
			break;
		default:
			++othercnt;
		}
	}	
	cout << "vowelcnt = " << vowelcnt << endl;
	cout << "othercnt = " << othercnt << endl;

	return 0;
}