/*************************************************************************
	> File Name: test.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年12月31日 星期六 17时11分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

void mainp(int)
{
    cout << "int version" << endl;
}

typedef void Func(int);
typedf decltype(mainp) Func2;

typedef void (*FuncPtr)(int);
typedef decltype(mainp)* FuncPtr2;

int main()
{
    char a = 'a';
    mainp(a);

}

