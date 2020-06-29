#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {	
	cout << "通过引用对vector元素进行操作" << endl;
	vector<int> vi = { 1,2,3,4,5,6,7,8,9 };
	//for (auto i : vi)
	//错误，变量i和vector中的元素没有关系，对其操作不改变vi
	for (auto &i :vi)
		i *= i;
	for (auto i : vi)
		cout << i << endl;

	cout << "通过索引对vector元素进行操作" << endl;
	vector<unsigned> scores(11, 0);
	//必须指定初始元素，后面才能通过下标修改元素
	//因为对空vector，无法通过下标添加元素
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}
	for (auto c : scores)
		cout << c << endl;
	return 0;
}