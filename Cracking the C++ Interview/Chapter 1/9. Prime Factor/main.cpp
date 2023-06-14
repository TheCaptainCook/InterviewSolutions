/*
 * Write the C++ program to find out the prime factors of a given number.
 *
 * Concept - A prime factor of natural number, is basically finding the factors that are divisible by the number provided..
 *
 * Ex - 13 -    1   13
 * Ex - 200 -   1   2   2   2   5   5
 *
 *  Written by TheCaptainCook
*/

#include <iostream>

using namespace std;

int main() {

    int i=2, num = 0;

    cout<<"Enter the numbers";
    cin>>num;

    cout<<"Prime Factors are 1"<<endl;

    while(num>=i)
    {
        if (num%i == 0)
        {
            num = num/i;
            cout<<"Prime Factors are " << i <<endl;
            i=2;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
