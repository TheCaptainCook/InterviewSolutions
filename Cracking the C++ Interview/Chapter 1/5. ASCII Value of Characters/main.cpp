/*
 * Write the C++ program to print the ASCII Value of the all characters
 *
 * Concept - Covert the A - Ascii value to
 * Ex - A - Z Range = 65 - 90 in ascii values
 * Ex - a - z Range = 97 - 122 in ascii values
 *
 *  We are using basic and simplest type casting method (converting character to integer format directly).
 *
 *  Written by TheCaptainCook
*/


#include <iostream>
using namespace std;

int asciiPrint (char c)
{
    return (int(c));
}
int main() {

    char charConv;
    int convInt;

    cout<<"Welcome to the Character to ASCII Conversion"<<endl;
    cout<<"Input any character (A - Z or a - z)"<<endl;
    cin>>charConv;

    convInt = asciiPrint(charConv);

    if (convInt>=65 && convInt <= 90 || convInt >=97 && convInt <= 122)
        cout<<"You converted integer value is " <<convInt<<" for value of "<<charConv<<endl;
    else
        cout<<"Please input a character"<<endl;

    return 0;
}
