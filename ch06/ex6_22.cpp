/*************************************************************************
	> File Name: ex6_22.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年12月31日 星期六 17时42分58秒
 ************************************************************************/

#include<iostream>
#include <stdexcept>
using namespace std;

void swap_int_ptr(int * &iptr1, int * &iptr2)
{
    if (NULL == iptr1 && NULL == iptr2)
        throw runtime_error("int ptr are all nullptr.\n");

    int *temp_ptr = NULL;

    temp_ptr = iptr1;
    iptr1 = iptr2;
    iptr2 = temp_ptr;

    return;
}

int main()
{
    int num1 = 10;
    int num2 = 1;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    swap_int_ptr(ptr1, ptr2);

    cout << "ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl;

    return 0;
}
