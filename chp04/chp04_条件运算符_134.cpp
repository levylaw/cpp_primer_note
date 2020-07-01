#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using namespace std;
int main() {
	int grade = 80;
	cout << ((grade < 60) ? "fail" : "pass") << endl;
	cout << (cout << (grade < 60) ? "fail" : "pass") << endl;
	return 0;
}