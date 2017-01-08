/*************************************************************************
	> File Name: ex7_02.h
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月08日 星期日 23时32分09秒
 ************************************************************************/

#ifndef _EX7_02_H
#define _EX7_02_H

using std::string;

struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold;
    double revenue;
};
#endif
