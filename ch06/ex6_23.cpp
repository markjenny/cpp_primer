/*************************************************************************
	> File Name: ex6_23.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月01日 星期日 11时20分53秒
 ************************************************************************/

#include<iostream>
#include <stdexcept>
#include <iterator>
using namespace std;

void my_print(const int i, const int *j)
{
    if (NULL == j)
        throw runtime_error("j is a nullptr");

    cout << i << endl;
    while (j)
        if (*j)
            cout << *j++ << endl;
}

void my_print(const int i, const int *begin, const int *end)
{
    if (NULL == begin || NULL == end)
        throw runtime_error("one of begin and end is nullptr");

    cout << i << endl;

    while (begin != end)
        cout << *begin++ << endl;
}

void my_print(const int i, const int j[], size_t size)
{
    cout << i << endl;
    
    for (size_t i = 0; i < size; ++i)
    {
        cout << j[i] << endl;
    }

}

int main()
{
    int i = 0, j[2] = {0,1};

    //version1
    my_print(i, j, end(j) - begin(j));
    //version2
    my_print(i, begin(j), end(j));
    return 0;
}
