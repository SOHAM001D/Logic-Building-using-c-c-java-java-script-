#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];         //only 29 bytes (\0 is included)

    printf("Enter your name : \n");
    scanf("%s", sName);

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}