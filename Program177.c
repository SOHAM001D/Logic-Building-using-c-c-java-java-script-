#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)       //issue solved
{
    int iDigit = 0, iRev = 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return (iRev == iTemp);
}

int main()
{
    int iValue = 0, iRet = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Palindrome \n");
    }
    else
    {
        printf("Number is not Palindrome \n");
    }

    return EXIT_SUCCESS;
}