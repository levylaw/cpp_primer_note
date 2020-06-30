#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
	int sought = 1;
	//vector<int> text = { 1,4,6,7,10,13,19 };
	vector<int> text = { 0,3,5 };
	auto beg = text.begin(), end = text.end();
	auto mid = beg + (end - beg) / 2;
	while (mid != end && *mid != sought) {
		if (sought < *mid)
			end = mid;
		else
			beg = mid+1;
		mid = beg + (end - beg) / 2;
	};
	cout << *mid << endl;
	return 0;
}