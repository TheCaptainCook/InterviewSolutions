/*
 * Write the C++ function to find even or odd
 *
 *  Written by TheCaptainCook
*/
#include <iostream>
using namespace std;

void evenOdd(int n)
{
    if (n%2 == 0)
        cout<<"even";
    else
        cout<<"odd";
}

int main() {

    evenOdd(12);

    return 0;
}
