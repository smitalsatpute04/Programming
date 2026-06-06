//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept range from user and display all numbers in between that range.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d  ",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
/*
input: Enter starting point: 20
       Enter ending point: 27
output: 20  21  22  23  24  25  26  27


let iEnd - iStart = N
time complexity --> O(N)
*/