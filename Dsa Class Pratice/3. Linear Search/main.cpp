/*
 * Write the C++ program to perform a linear Search
 *
 * Concept - The Linear Search searches the element by scanning every element
 * Ex Array - 1   5   45  88  12  13  44  55  23  78  96
 * To Search 13
 * It matches every element with 13
 *
 *  Time complexity for linear search is denoted by O(n)
 *  In linear search, best-case complexity is O(1) where the element is found at the first index.
 *  Worst-case complexity is O(n) where the element is found at the last index or element is not present in the array
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

void linearSearch(int LinearArr[], int n, int searchElement)
{
    int start = 0;
    int end = n - 1;
    int location = 0;

    for (start = 0; LinearArr[start]!='\0';start++)
    {
        if (LinearArr[start] == searchElement)
        {
            location = start;
        }
    }
    if (location >0 )
    {
        cout<<"Element found at location " <<location+1<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}

int main() {

    int searchArr[10], i, searchElement;

    cout <<"Enter the 10 elements"<<endl;

    for (i=0;i<10;i++)
    {
        cin>>searchArr[i];
    }

    cout<<"Enter the element to search for"<<endl;
    cin>>searchElement;

    linearSearch(searchArr,10,searchElement);

    return 0;
}
