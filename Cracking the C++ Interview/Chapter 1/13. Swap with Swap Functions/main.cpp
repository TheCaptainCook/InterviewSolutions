/*
 * Write the C++ program to swap 2 numbers with the swap function
 *
 * Concept - swap is the latest embedded function is capable of swapping 2 integer values.
 *
 * Ex -                 1   2
 * Swapped values -     2   1
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cout<<"Welcome to the Swapping Program"<<endl;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Your Selected Values are: "<<num1<<" "<<num2<<endl;
    swap(num1, num2);
    cout<<"After Swapping your Values are: "<<num1<<" "<<num2<<endl;
    return 0;
}
