/*************************************************************************
	> File Name: ex6_27.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月01日 星期日 14时51分18秒
 ************************************************************************/

#include<iostream>
#include <initializer_list>
#include <cstdlib>

using std::cout;
using std::endl;
using std::initializer_list;

int get_sum(const initializer_list<int> &ilist)
{
    int sum = 0;
    for (initializer_list<int>::iterator iter = ilist.begin(); iter != ilist.end(); iter++)
    {
        sum += *iter;
    }
    return sum;
}

int main()
{
    cout << get_sum({1,2,3,4}) << endl;
    return EXIT_SUCCESS;
}
