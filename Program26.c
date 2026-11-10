#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];         //only 29 bytes ('\0' is included)

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName);      // %[^'\n']s : accept input untill user enters

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}