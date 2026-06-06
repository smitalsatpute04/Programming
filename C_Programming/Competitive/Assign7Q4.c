/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display its odd factorial
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    if(iNo<0)
    {
        iNo = -iNo; 
    }

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        if(iCnt % 2 != 0)
        {
            iFac = iFac * iCnt;
            printf("%d *",iCnt);
        }
    }
    return iFac;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("\nThe odd factorial of %d is %d", iValue, iRet);
    return 0;
}

/*
input: 5
output: 5 * 3 * 1
        The product of odd factorial of 5 is 15.
Time complexcity --> O(N).        
*/