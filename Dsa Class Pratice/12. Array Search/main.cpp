#include <iostream>
using namespace std;

int main() {

    char str[50];
    int i, count =0, j;

    cin>>str;

    for (i=0;str[i]!='\0';i++)
    {
        count++;                // print the no of characters in name
    }
    cout<<count;

    for (i=count;i>=0;i--)
    {
        cout<<str[i];           // Name in reverse order
    }
    cout<<endl;

    for (i = 0, j='\0';i<count/2, j<=count/2;i++, j--)       //Palindrome checker
    {
        if (str[i]==str[j])
        {
            cout<<str[i]<<"-"<<str[j]<<"matched"<<endl;
        }
        else
        {
            cout<<str[i]<<"-"<<str[j]<<"Mot Matched"<<endl;
        }
    }



    return 0;
}
