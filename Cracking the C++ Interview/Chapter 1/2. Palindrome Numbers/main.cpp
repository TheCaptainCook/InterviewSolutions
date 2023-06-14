/*
 * Write the C++ program to check whether the given number is palindrome or not
 *
 * Concept - Palindrome Number are numbers which upon reversing stays the same.
 * Ex - 121 - Palindrome Number
 * Ex - 123 - Not a palindrome number
 *
 *  Written by TheCaptainCook
*/
#include <iostream>

using namespace std;

int main() {

    int num, origNum, revNum, modNum;

    cout<<"Enter the number to check if the number is palindrome or not"<<endl;
    cin>>num;

    origNum = num;

    while(num>0)
    {
        modNum = num % 10 ;
        revNum = revNum * 10 + modNum;
        num = num / 10;
    }

    if (origNum == revNum)
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome Number";
    }
    return 0;
}
