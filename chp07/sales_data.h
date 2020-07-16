#include <iostream>
#include <string>

struct Sales_data
{
	//成员函数声明
	std::string isbn() const { return bookNo; }//函数定义
	//const表示函数isbn()不对*this进行修改（this为底层const,即const Sales_data* this)
	//同时this本身是顶层const,即 Sales_data* const this
	//总结而言，即const Sales_data* const this
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	//添加数据成员
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//成员函数定义时要加作用域
Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
};
double Sales_data::avg_price() const {
	return units_sold ? revenue / units_sold : 0;
};

//非成员的接口函数声明
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
//不对调用函数的对象进行修改，所以参数中的Sales_data&都为const
std::istream& read(std::istream&, Sales_data&);
//为什么返回是istream&？
//为什么读取也会改变流的内容？

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
};
std::ostream& print(std::ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
};
std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}
/*
类{
成员函数声明
数据成员
}
成员函数定义
非成员的接口函数声明
非成员的接口函数定义
*/