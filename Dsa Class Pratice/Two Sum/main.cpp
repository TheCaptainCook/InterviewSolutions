// Link - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {3,2,4};

    int position = 6;

    cout<<sizeof (numbers)<<" = ";

    for(int i=0;i<sizeof (numbers);i++){
        for (int j=0;j<sizeof (numbers);j++){
            if (position == (numbers[i]+ numbers[j])){
                cout<<i+1<<i+2;
                return 0;
            }
            else {
                continue;
            }
        }
    }
    return 0;
}