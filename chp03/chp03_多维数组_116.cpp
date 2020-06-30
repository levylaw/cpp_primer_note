#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;
//或者直接 using namespace std;
int main() {
	int ia[2][3];
	size_t cnt = 0;
	//对二行三列的多维数组进行赋值
	//所赋的值为该元素的下标，所以用size_t较为合适
	for (auto& row : ia)
		for (auto& col : row) {
			col = cnt;
			++cnt;
		}
	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << endl;
	}
	return 0;
}