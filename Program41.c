#include<stdio.h>
#include<stdlib.h>

void Maximum(int ino1,int ino2)     //void because maximum is not returning anything
{
    if(ino1 > ino2)
    {
        printf("Maximum number is %d\n", ino1);
    }
    else
    {
        printf("Maximum number is %d\n", ino2);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);
    
    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    Maximum(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}