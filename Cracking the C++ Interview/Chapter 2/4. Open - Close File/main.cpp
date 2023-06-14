/*
 * Write the C++ program to open and close a file
 *
 * Concept - Opening and Closing the files can be tricky at times. But with the included header "fstream" it is quite simple.
 *
 * Basic Operations -   ofstream	Creates and writes to file
 *                      ifstream	Reads from files
 *                      fstream	    A combination of ofstream and ifstream
 *                                  creates, reads, and writes to files
 *
 *  Written by TheCaptainCook
*/

#include <iostream>
#include "fstream"
using namespace std;

int main() {

    ofstream newFile( "helloWorldFromCse.txt");         // Create a file

    if (newFile.is_open())
        cout<<"File Exists";
    else
        cout<<"Error";

    newFile.close();                                        // Closing the file


    return 0;
}
