/*
 * Write the C++ program to perform binary search
 *
 * Concept -    Binary search work on principle of sorted arrays.
 *              Binary search is the searching the element by repeatedly dividing the array
 *              in half and searching the half that is more likely to contain the target value.
 *
 * Ex -         1   2   3   4   5   6   7   8   9   10  11
 * To Find -    5
 * Output -     Element found in location 5 in the array
 *
 * Time complexity  -   O(log n)
 * Space Complexity -   O(1)
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int BinarySearch(int eleSearch, int proArr[], int end) {
    int start, mid;
    start = 0;
    while (start <= end) {
        mid = (start + end) / 2;
        if (proArr[mid] == eleSearch)
            return mid;

        if (proArr[mid] < eleSearch)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[10], find=0, endElem ;
    cout<<"Welcome to the Binary Search" <<endl;
    cout<<"Enter the elements, you would like to enter"<<endl;
    cin>>endElem;
    cout<<"Enter "<< endElem<< " elements"<<endl;
    for (int i=0;i<endElem;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Number to find in array"<<endl;
    cin >> find;

    int n = BinarySearch(find, arr, endElem );

    if (n == -1)
        cout<<"Element Not Found in Provided array "<<endl;
    else
        cout<<"Element found in location "<<n+1 <<" in the array"<<endl;

    return 0;
}
