/*
    ---------------------------------
            operation ||
    ---------------------------------
    result1    result2   final result
    ---------------------------------
      TRUE      TRUE        TRUE    Short Circuit Evaluation
      TRUE      FALSE       TRUE    Short Circuit Evaluation
      FALSE     TRUE        TRUE    
      FALSE     FALSE       FALSE   

*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) || ((iNo % 3 == 0)))
    {
        printf("%d is divisible by 5 or 3 \n", iNo);
    }
    else
    {
        printf("%d is not divisible by 5 or 3 \n", iNo);
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