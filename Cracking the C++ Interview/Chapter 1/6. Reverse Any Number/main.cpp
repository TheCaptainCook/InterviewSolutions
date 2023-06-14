/*
 * Write the C++ program to reverse any number
 *
 * Ex - Number Provided - 123
 *      Reverse Number  - 321
 *
 *  Written by TheCaptainCook
*/
#include <iostream>
using namespace std;

int revNum(int n)
{
    int rev = 0, tempNum = 0;
    while (n>0)
    {
        tempNum = n %10;
        rev = rev *10 + tempNum ;
        n = n/10;
    }
    return rev;
}

int main() {

    int num = 0, rev = 0;

    cout<<"Welcome the the Reverse number converter program" <<endl;
    cout<<"Enter the Number you want to reverse" <<endl;
    cin>>num;

    rev = revNum(num);

    cout<<"Your Input = "<<num<<"\n"<<"Your output = "<<rev<<endl;


    return 0;
}
