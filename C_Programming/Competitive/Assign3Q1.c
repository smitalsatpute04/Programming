/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept number from user and print that number of even numbers on screen.
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Please enter valid number");
    }

    else
    {
        for(iCnt = 2; iCnt <= iNo*2 ; iCnt += 2)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}

// if input : 5
//expected out: 2 4 6 8 10