/*
Author:     Billy Gene Ridgeway
Date:       October 18th. 2022
Purpose:    Practicing working with pointers and arrays and making a print function in C.
*/

#include<stdio.h>

/*
void print(char* C)
{
    int i = 0;
    while (C[i] != '\0')    // while(*(C+i) != '\0') would also work.
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}
*/

// The same function as above using pointer artihmetic.

void print(char* C)
{
    while (*C != '\0')   
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main()
{
    char C[20] = "Hello";
    print(C);

    return 0;
}