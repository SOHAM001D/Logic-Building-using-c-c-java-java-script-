
#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter Frequency : \n");
    scanf("%d", &iValue);
    
    iret = Summation(iValue);

    printf("Summation is : %d\n", iret);
        
    return EXIT_SUCCESS;
}