/*************************************************************************
	> File Name: ex6_36.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月01日 星期日 16时21分08秒
 ************************************************************************/

#include<iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

typedef string arrT1[5];
using arrT2 = string[5];

string odd[] = {"a","c","e","g","i"};
string even[] = {"b","d","f","h","j"};

arrT1& get_arri1(int i)
{
    return i%2 ? odd : even;
}

arrT2& get_arr2(int i)
{
    return i%2 ? odd : even;
}

string (&get_arr3(int i))[5]
{
    return i%2 ? odd : even;
}

auto get_arr4(int i) -> string(&)[10]
{
    return i%2 ? odd : even;
}

decltype(odd)&  get_arr5(int i)
{
    return i%2 ? odd : even;
}

int main()
{
    arrT2 a = get_arr3(3);
    return EXIT_SUCCESS;
}
