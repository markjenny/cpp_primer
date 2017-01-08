/*************************************************************************
	> File Name: ex6_42.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2017年01月04日 星期三 00时34分57秒
 ************************************************************************/

#include<iostream>
#include <cstdlib>
#include <string>

using namespace std;
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return ctr > 1 ? word + ending : word;
}

int main()
{
    string ret = make_plural(1, "success");
    cout << ret << endl;

    ret = make_plural(2, "success");
    cout << ret << endl;

    ret = make_plural(1, "failure");
    cout << ret << endl;

    ret = make_plural(2, "failure");
    cout << ret << endl;

    return EXIT_SUCCESS;
}
