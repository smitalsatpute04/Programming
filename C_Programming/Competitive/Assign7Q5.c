/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display difference btw its even & odd factorial
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DiffFactorial(int iNo)
{
    int iCnt = 0;
    int iEFac = 1;
    int iOFac = 1;

    if(iNo<0)
    {
        iNo = -iNo; 
    }

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        if(iCnt % 2 != 0)
        {
            iOFac = iOFac * iCnt;
            printf("%d *",iCnt);
        }
    }
    printf("= %d",iOFac);

    printf("\n");

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        if(iCnt % 2 == 0)
        {
            iEFac = iEFac * iCnt;
            printf("%d * ",iCnt);
        }
    }
    printf("= %d",iEFac);

    if(iEFac > iOFac)
    {
        return iEFac - iOFac;
    }
    else
    {
        return iOFac - iEFac;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);
    printf("\nThe Difference btw even And odd Factorial of %d is %d ",iValue,iRet);
    return 0;
}
/*
input: Enter number: 5
output: 5 *3 *1 *= 15
        4 * 2 * = 8
        The Difference btw even And odd Factorial of 5 is 7
Time complexcity --> O(N)+O(N)= O(2N)        
*/