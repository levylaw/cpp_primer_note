#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using namespace std;
int main() {
	vector<int> v = { 1,2,5,-3};
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0) {
		cout << *pbeg++ << endl;
		//等价于 cout << *(pbeg++) << endl;
		//解引操作返回的是未增加之前值的副本
	}
	return 0;
}