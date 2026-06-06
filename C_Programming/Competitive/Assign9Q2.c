/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return the count of odd digits.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d  ",iDigit);

        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("\nThe odd digit count is %d",iRet);
    return 0;
}
/*
input: Enter number: 13455
output: 5  5  4  3  1
       The odd digit count is 4

time complexity-->  O(log N)       
*/