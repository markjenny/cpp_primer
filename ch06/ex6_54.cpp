/*************************************************************************
	> File Name: ex6_54.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月08日 星期日 14时16分51秒
 ************************************************************************/

#include<iostream>
#include <vector>
using std::vector;
using std::endl;
using std::cout;

int Func(int, int);

int func_plus(int num1, int num2)
{
    return num1 + num2;
}

int func_minus(int num1, int num2)
{
    return num1 - num2;
}

int func_times(int num1, int num2)
{
    return num1 * num2;
}

int func_devide(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    vector<decltype(Func)*> fvec;
    fvec.push_back(func_plus);
    fvec.push_back(func_minus);
    fvec.push_back(func_times);
    fvec.push_back(func_devide);

    for (auto f : fvec)
        cout << f(4, 4) << endl;

    return 0;
}
