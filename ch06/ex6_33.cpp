/*************************************************************************
	> File Name: ex6_33.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月01日 星期日 15时58分13秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <cstdlib>

using std::cout;
using std::endl;
using std::next;
using std::vector;

template <typename Iterator>
void print_rescur(Iterator beg, Iterator end)
{
    if (beg == end)
        return;

    cout << *beg << " ";
    print_rescur(next(beg), end);
}

int main()
{
    vector<int> ivec = {1,2,3};
    print_rescur(ivec.begin(), ivec.end());

    return EXIT_SUCCESS;
}
