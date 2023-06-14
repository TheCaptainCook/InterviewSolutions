/*
 * Write the C++ program to delete a file
 *
 * Concept -    Deletes the file whose name is specified in filename.
 *                  This is an operation performed directly on a file identified by its filename;
 *                  No streams are involved in the operation.
 *
 *  Written by TheCaptainCook
*/

#include <iostream>

using namespace std;

int main() {

    if (remove("Hello.txt") == 0)
        printf("Deleted successfully");
    else
        printf("Unable to delete the file");


    return 0;
}
