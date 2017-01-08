/*************************************************************************
	> File Name: ex6_21.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年12月31日 星期六 17时30分16秒
 ************************************************************************/

#include<iostream>
#include <exception>
#include <stdexcept>
using namespace std;


int large_one(const int num1, const int *num2)
{
    if (NULL == num2)
        throw runtime_error("num2 if null pointer.\n");

    return num1 > *num2 ? num1 : *num2;
}

int main()
{
    int a = 7;
    cout << large_one(8, &a) << endl;
    return 0;
}
