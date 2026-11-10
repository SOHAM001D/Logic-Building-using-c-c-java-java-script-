#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];         //only 29 bytes ('\0' is included)
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName);      // %[^'\n']s : accept input untill user enters      Enter remains in input buffer

    fflush(stdin);
    
    printf("Enter Your Age : \n");
    scanf("%d", &iAge);       

    printf("Enter Your Marks : \n");
    scanf("%f", &fMarks);

    printf("Welcome %s\n", sName);
    printf("Your Age is : %d\n", iAge);
    printf("Your Marks is : %f\n", fMarks);

    return EXIT_SUCCESS;
}