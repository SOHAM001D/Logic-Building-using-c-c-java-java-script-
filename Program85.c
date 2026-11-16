/*
    ---------------------------------
            operation &&
    ---------------------------------
    result1    result2   final result
    ---------------------------------
      TRUE      TRUE        TRUE
      TRUE      FALSE       FALSE
      FALSE     TRUE        FALSE   Short Circuit
      FALSE     FALSE       FALSE   Short Circuit

*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3 == 0)))
    {
        printf("%d is divisible by 5 and 3 \n", iNo);
    }
    else
    {
        printf("%d is not divisible by 5 and 3 \n", iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}