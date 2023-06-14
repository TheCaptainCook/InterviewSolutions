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
