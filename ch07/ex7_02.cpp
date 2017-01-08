/*************************************************************************
	> File Name: ex7_02.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月08日 星期日 23时38分43秒
 ************************************************************************/

#include<iostream>
#include "ex7_02.h"

using namespace std;

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

