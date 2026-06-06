/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accepts numner from user and display its all non factors 
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iNo %  iCnt != 0)
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
output: 5       7       8       9       10      11

time complexcity --> O(N)
*/