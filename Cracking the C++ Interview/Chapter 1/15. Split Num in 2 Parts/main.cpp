/*
 * Write the C++ program to spit the numbers into 2 digits
 *
 * Concept -
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int numb,numb2, temp;
    cout<<"Enter the Number splitter program"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>numb;
    // let's assume that the number is 2 digits number.
    numb2 = numb%10;
    numb = numb /10;

    cout<<"Your split two digit number is : "<<numb<<"\t"<<numb2;

    return 0;
}
