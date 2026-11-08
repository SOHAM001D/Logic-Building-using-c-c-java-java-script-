#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEvenOdd(int no1)
{
    if((no1 % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bret = false;  

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    bret = CheckEvenOdd(ivalue);
    if(bret == true)
    {
        printf("%d is even number\n",ivalue);
    }
    else
    {
        printf("%d is odd number\n",ivalue);
    }
    return EXIT_SUCCESS;
}