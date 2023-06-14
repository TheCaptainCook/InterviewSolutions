/*
 * Write the C++ program add 2 numbers without the '+' operator
 *
 * Concept - We can perform the operation with the inversion of the bits
 * Ex - 12 + 13 = 25
 *
 * We are using the (~) sign to invert the bits of b and then subtracting the two values to get the desired answer
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std ;

int main() {

    int a=0, b=0, c=0;

    cout<<"Welcome to the Addition Program "<<endl;
    cout<<"Insert two Numbers "<<endl;
    cin >>a>>b;

    c= a - (~b) - 1;

    cout<<"Addition of "<<a<<" and " <<b <<" is "<< c<<endl;


    return 0;
}
