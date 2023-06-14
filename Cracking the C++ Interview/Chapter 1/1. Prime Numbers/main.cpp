/*
 * Write the C++ program to check whether the given number is prime or not
 *
 * Concept - Prime Number are numbers which have factors 1 or itself.
 * Ex - 11 - Factors 1, 11 - This is a prime Number
 * Ex - 12 - Factors 1, 2, 3, 4, 6, 12 - This is not a prime number
 *
 *  Written by TheCaptainCook
*/
#include <iostream>

using namespace std;

int main() {

    int num=0, count=0;

    cout<<"Enter the Number to check for the Prime Numbers"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            count++;                                            // Count the number of factors of the numbers.
        }
        /*else
        {
            cout<<num<<" is not divisible by " <<i<<endl;       // Check the number's divisibility
        }*/
    }

    if (count == 2)
    {
        cout<<"This is prime number"<<endl;
    }
    else
    {
        cout<<"This is not a prime number"<<endl;
    }

    return 0;
}
