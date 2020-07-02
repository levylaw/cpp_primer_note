#include <iostream>
#include "fact.h"
using std::cin; using std::cout; using std::endl;
int main() {
	int j;
	cin >> j;
	cout << j << "! is " << fact(j) << endl;
	return 0;
}