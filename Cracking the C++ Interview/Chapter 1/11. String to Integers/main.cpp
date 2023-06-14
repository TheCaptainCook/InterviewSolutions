/*
 * Write the C++ program to convert string to integer without using library functions of C++
 *
 * Ex -  Hello  -   72,101,108,108,111,
 *
 * We are using the arrays to convert the character into integers using type casting method.
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int i;
    char str[10];

    cout<<"Welcome to the String to Integer converter Program" <<endl;
    cin>>str;

    for (i=0;i<str[i]!='\0';i++)
    {
        cout<<int(str[i])<<",";
    }

    return 0;
}
