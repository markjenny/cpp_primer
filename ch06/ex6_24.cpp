/*************************************************************************
	> File Name: ex6_24.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月01日 星期日 14时28分57秒
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

void print(const int a[10])
{
    for (size_t i = 0; i != 10; i++)
        cout << a[i] << endl;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    print(a);
    return 0;
}
