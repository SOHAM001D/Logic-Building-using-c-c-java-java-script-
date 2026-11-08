#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int no1)
{
    if((no1 % 2) == 0)
    {
        printf("%d is even number\n",no1);
    }
    else
    {
        printf("%d is odd number\n",no1);
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);
    return EXIT_SUCCESS;
}