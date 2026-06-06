//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept range from user and display all even numbers in between that range.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d  ",iCnt);
        }
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

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}
/*
input: Enter starting point: 20
       Enter ending point: 30
output: 20  22  24  26  28  30


let iEnd - iStart = N
time complexity --> O(N)
*/