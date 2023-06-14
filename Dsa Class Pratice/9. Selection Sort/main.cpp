/*
 * Write the C++ program to perform a selection sort in an array
 *
 * Concept - The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the
 *              list and swaps it with the first element of the unsorted part.
 *              This process is repeated for the remaining unsorted portion until the entire list is sorted.
 *
 * Ex Array -           4   2   6   3   9   8
 * Sorting Procedure -  2   3   4   6   8   9
 *
 * The space complexity of Selection Sort is O(1)
 * The selection sort has best and worst time complexity of O(n^2)
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;
int main() {

    int numEle, selSort[50], i, j, k, l, temp;
    cout<<"Welcome to Selection Sort Program"<<endl;
    cout<<"Enter the number of elements of unsorted array"<<endl;
    cin>>numEle;
    cout<<"Enter "<< numEle <<" of the Unsorted Array" <<endl;
    for (i=0;i<numEle;i++)
    {
        cin>>selSort[i];
    }
    cout<<"Inserted Array - ";
    for (i=0;i<numEle;i++)
    {
        cout<<selSort[i]<<"\t";
    }
    cout<<"\nSorting Process"<<endl;
    for (j=0;j<numEle;j++)
    {
        for (k=0;k<numEle;k++)
        {
            if (selSort[j]<selSort[k])
            {
                temp = selSort[j];
                selSort[j] = selSort[k];
                selSort[k] = temp;

                for (l=0;l<numEle;l++)
                {
                    cout<<selSort[l]<<"\t";
                }
                cout<<"\n";
            }
        }
    }
    cout<<"Sorted Array is - ";

    for (i=0;i<numEle;i++)
    {
        cout<<selSort[i] <<"\t";
    }
    return 0;
}
