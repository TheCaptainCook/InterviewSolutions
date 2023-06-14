/*
 * Write the C++ program print 1- N without using the loop
 *
 * Concept - It can be only be done by goto statements in the code
 *
 * Ex - Declare goHereToRepeat
 * Ex - Add a goto Statement - such as goto goHereToRepeat
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int temp=0, i=0;

    cout<<"Welcome to loops without using loops"<<endl;
    cout<<"Enter the number to get the loop to - "<<endl;
    cin>>i;

    goHereToRepeat:

    cout<<temp<<" ";
    temp++;

    if (temp > i)
        return 0;

    goto goHereToRepeat;

}
