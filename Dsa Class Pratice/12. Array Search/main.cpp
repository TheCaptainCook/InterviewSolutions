#include <iostream>
using namespace std;

int main() {

    char str[50], str1[50];
    int i, count =0;

    cin>>str;

    for (i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;

    for (i=count;i>=0;i--)
    {
        cout<<str1[i];
    }



    return 0;
}
