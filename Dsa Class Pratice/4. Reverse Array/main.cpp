/*
 * Write the C++ program to reverse an array
 *
 * Concept - Displaying the array in the reverse order.
 * Ex - 1   2   3   4   5   6   7   8   9   10  11
 * Ex - 11  10  9   8   7   6   5   4   3   2   1
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

void reverseArray(int tranArr[50], int end)
{
    int revArr[50], i, j;
    for ( i=0, j=end-1 ; i>end-1, j>=0; i++, j--)
    {
        revArr[i] = tranArr[j];
    }

    for (i = 0; i<end; i ++)
    {
        cout<<revArr[i];
    }
}

int main() {

    int i,n, traverseArr[50];

    cout<<"Welcome to Array Reverse Program"<<endl;
    cout<<"How many elements you want to enter ?"<<endl;
    cin>>n;
    cout<<"Enter "<< n<<" elements - "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>traverseArr[i];
    }
    reverseArray(traverseArr, n);

   return 0;
}
