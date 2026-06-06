/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and print all odd numbers till that N number.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo<0)
    {
        for(iCnt = -1; iCnt >= iNo; iCnt --)
        {
            if(iCnt % 2 != 0)
            {
                printf("%d  ",iCnt);
            }
        }
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt ++)
        {
            if(iCnt % 2 != 0)
            {
                printf("%d  ",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
/*
input: Enter number: 10
output: 1  3  5  7  9

time complexcity --> O(N)
*/