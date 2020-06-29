#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	/*
	string word;
	while (cin >> word)
		cout << word << endl;
	*/
	string line;
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}