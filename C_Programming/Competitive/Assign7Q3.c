/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display its even factorial
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFac = iFac * iCnt;
            printf("%d * ",iCnt);
        }
    }
    return iFac;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("\nThe even factorial of %d is %d",iValue,iRet);

    return 0;
}
/*
input: 5
output: 4 * 2 *
        The product of even factorial of 5 is 8.
Time Complexcity --> O(N).        
*/