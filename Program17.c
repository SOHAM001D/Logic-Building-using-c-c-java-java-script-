#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    if((ivalue % 2) == 0)
    {
        printf("%d is even number\n",ivalue);
    }
    else
    {
        printf("%d is odd number\n",ivalue);
    }
    return EXIT_SUCCESS;
}