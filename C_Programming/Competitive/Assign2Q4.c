/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept two numbers from user and display first number in second number of time
// Author: Smital Bajarang Satpute
// Date: 23/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -(iFrequency);
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue);

    printf("Enter second number: ");
    scanf("%d", &iCount);

    Display(iValue,iCount);
    return 0;
}