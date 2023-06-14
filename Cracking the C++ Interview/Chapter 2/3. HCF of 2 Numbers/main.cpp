/*
 * Write the C++ program to find out the HCF of 2 numbers.
 *
 * Concept - The full form of HCF is The Highest Common Factor.
 *              HCF of two numbers is the highest factor that can divide the two numbers, evenly
 *
 * Ex - 16 -    2   2   2   2
 * Ex - 18 -    2   3   3
 * Selecting    -
 *
 * HCF - 2  -   2
 *
 *  Written by TheCaptainCook
 */

#include <iostream>
using namespace std;

int main() {

    int numb1, numb2, dev = 2, hcfNum=1;

    cout<<"Welcome to the HCF Calculator Program"<<endl;
    cout<<"Enter two Numbers to calculate the HCF"<<endl;
    cin>>numb1>>numb2;

    while(numb1>dev && numb2>dev)
    {
        if(numb1%dev==0 && numb2%dev==0)
        {
            numb1 = numb1 /dev;
            numb2 = numb2 /dev;
            hcfNum = hcfNum * dev;
            dev=2;
        }
        else
            dev++;
    }
    cout<<"The HCF of the two Numbers is : "<<hcfNum;

    return 0;
}
