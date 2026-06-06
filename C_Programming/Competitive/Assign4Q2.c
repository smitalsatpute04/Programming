/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accepts numner from user and display its factor in descending order
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt --)
    {
        if(iNo %  iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}
/*
input: Enter Number: 12
output: 6       4       3       2       1

time complexcity --> O(N/2)
*/