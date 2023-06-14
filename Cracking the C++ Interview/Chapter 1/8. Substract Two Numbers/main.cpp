/*
 * Write the C++ program subtract 2 numbers without the '-' operator
 *
 * Concept - We can perform the operation with the inversion of the bits
 *
 * Ex - 12 - 11 = 1
 *
 * We are using the (~) sign to invert the bits of b and then performing addition of two values to get the desired answer.
 *
 *  Written by TheCaptainCook
*/

#include <iostream>

using namespace std;

int main() {

    int a=0,b=0,c=0;

    cout<<"Welcome to the Subtraction Program "<<endl;
    cout<<"Insert two Numbers "<<endl;
    cin >>a>>b;

    c= a + (~b) + 1;

    cout<<"Subtraction of "<<a<<" and " <<b <<" is "<< c<<endl;


    return 0;





    return 0;
}
