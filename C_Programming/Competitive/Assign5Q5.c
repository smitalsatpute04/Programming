/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and print first 5 multiples of N.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d  ",iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
/*
input: Enter number: 4
output: 4  8  12  16  20

time complexcity --> O(1) because loop will iterate 5 times (constant)
*/