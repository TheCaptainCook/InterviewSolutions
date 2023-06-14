/*
 * Write the C++ program to find out the LCM of 2 numbers.
 *
 * Concept - LCM is the short form for “Least Common Multiple.”
 *              The least common multiple is defined as the smallest multiple that two or more numbers have in common.
 *
 * Ex - 16 -    2   2   3   2   2   < - This Element
 * Ex - 18 -    2   2   3   2   3   < - This Element
 *              -   -   -   -   -
 * LCM - 144 -  2   2   3   2   2   3
 *
 *  Written by TheCaptainCook
 */

#include <iostream>
using namespace std;

int main() {

    int numb1, numb2, i=2, numbLcm=1;
    cout<<"Welcome to the LCM Finding program"<<endl;
    cout<<"Enter two numbers: "<<endl;
    cin>>numb1>>numb2;

    if (numb1%numb2==0)
    {
        cout<<"Lcm is "<< numb1;
    }
    else if (numb2%numb1==0)
    {
        cout<<"LCM is " << numb2;
    }
    else
    {
        while(numb1>=i && numb2>=i)
        {
            if (numb1%i == 0 && numb2%i == 0)
            {
                numb1 = numb1/i;
                numb2 = numb2/i;
                numbLcm = numbLcm * i;
                i=2;
            }
            else
            {
                i++;
            }
        }
        numbLcm = numbLcm * numb1 * numb2;
        cout<<"LCM is "<<numbLcm;
    }
    return 0;
}
