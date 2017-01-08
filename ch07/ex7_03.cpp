/*************************************************************************
	> File Name: ex7_03.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月08日 星期日 23时44分58秒
 ************************************************************************/

#include<iostream>
#include "ex7_02.h"
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;

int main()
{
    Sales_data total;

    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.bookNo  << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cerr << "No data?" <<endl;
    }
    return 0;
}
