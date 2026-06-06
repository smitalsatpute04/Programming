//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept range from user and display addition of all even numbers in between that range.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d  ",iCnt);
        iSum = iSum + iCnt; 
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("\nThe Addition of all numbers btw %d and %d is %d",iValue1,iValue2,iRet);
    return 0;
}
/*
input: Enter starting point: 20
       Enter ending point: 30
output: 20  21  22  23  24  25  26  27  28  29  30
        The Addition of all numbers btw 20 and 30 is 275

let iEnd - iStart = N    
time complexity --> O(N)
*/