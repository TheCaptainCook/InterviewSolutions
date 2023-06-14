/*
 * Write the C++ program to perform a bubble sort in an array.
 *
 * Concept - Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
 *
 * Ex Array -           4   2   6   3   9   8
 * Bubble Sort          2   3   4   6   8   9
 *
 * The space complexity of Bubble Sort is O(1)
 *
 * Best Time Complexity: O(n^2)
 * Average Time Complexity: O(n^2)
 * Worst Time Complexity: O(n^2)
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int i, j, k,l, m, temp, numBub, bubSort[50];

    cout<<"Welcome to the Bubble Sort Program"<<endl;
    cout<<"Enter the elements you want to enter"<<endl;
    cin>>numBub;
    cout<<"Enter "<<numBub <<" elements of unsorted array"<<endl;
    for(i=0;i<numBub;i++)
    {
        cin>>bubSort[i];
    }

    cout<<"Sorting Process - " <<endl ;
    for(i=0;i<numBub;i++)
    {
        cout<<bubSort[i]<<"\t";
    }
    cout<<"\n";

    for (j=0;j<numBub-1;j++)
    {
        for (k=0;k<numBub-j-1;k++)
        {
            if (bubSort[k] > bubSort[k+1])
            {
                temp = bubSort[k];
                bubSort[k] = bubSort[k+1];
                bubSort[k+1] = temp;

                for (l=0;l<=numBub-1;l++)
                {
                    cout<<bubSort[l]<<"\t";
                }
                cout<<endl;
            }
        }
    }
    cout<<"Bubble Sorted Arrays - ";
    for(m=0;m<numBub;m++)
    {
        cout<<bubSort[m]<<"\t";
    }


    return 0;
}
