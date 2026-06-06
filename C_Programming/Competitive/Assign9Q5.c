//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return the difference btw summation of even digit & summation of odd digits.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iAdd = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d  ",iDigit);

        if(iDigit % 2 != 0)
        {
            iSum = iSum + iDigit;
        }
        
        if(iDigit % 2 == 0)
        {
            iAdd = iAdd + iDigit;
        }
        
        iNo = iNo / 10;
    }

    return iAdd - iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);
    printf("\nThe diff btw summation of even digits & odd digit is %d",iRet);
    return 0;
}
/*
input: Enter number: 123345646
output: 6  4  6  5  4  3  3  2  1
        The diff btw summation of even digits & odd digit is 10

time complexity --> O(log N)        
*/