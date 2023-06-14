/*
 * Write the C++ program to count the number of digits in a given number.
 *
 * Concept - Counting of the digits can be done by simply dividing the number until it reaches under 10.
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int numb, numCount=0;
    cout<<"Welcome to the Numbers counter"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>numb;
    while(numb>=10)
    {
        numb = numb/10;
        numCount++;
    }

    cout<<"Number counter is " <<numCount+1;

    return 0;
}
