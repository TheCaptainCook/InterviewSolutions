/*
 * Write the C++ program to check whether the given string is palindrome or not
 *
 * Concept - Palindrome Number are numbers which upon reversing stays the same.
 * Ex - Malayalam - Palindrome String
 * Ex - Hello - Not a palindrome String
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
using namespace std;

int main() {

    int i=0, j=0, arrSize=0, count=0, notPalCnt = 0;
    char palNum[20];

    cout<<"Enter the String to check the number if its palindrome or not"<<endl;
    cin>>palNum;

    for(i=0;palNum[i]!='\0';i++)
    {
        count ++;                                   // Count the number of character in string
    }

    if (count%2 == 0)                               // Checks if count divided by 2 gives remainder 0
    {
        for (i=0, j=count-1;i<count/2;i++, j--)
        {
            if (palNum[i] == palNum[j])
            {
                continue;
            }
            else
                notPalCnt++;                        // Checking the string for not matching characters
        }
    }
    else if (count%2!=0)                            // Checks if count divided by 2 gives remainder 0
    {
        for (i=0, j=count-1; j>count/2;i++, j--)
        {
            if (palNum[i] == palNum[j])
            {
                continue;
            }
            else
                notPalCnt++;                        // Checking the string for not matching characters
        }
    }

    if (notPalCnt>0)                                //Lastly displaying results
        cout<<"Not a Palindrome String"<<endl;
    else
        cout<<"Palindrome String"<<endl;

    return 0;
}
