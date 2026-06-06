/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accepts numner from user and display difference btw summation of its all factors and non factors 
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DisplayFactor(int iNo)
{
    int iCnt = 0;
    int iAdd = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iNo %  iCnt == 0)
        {
            iAdd = iAdd + iCnt;
        }

        if(iNo %  iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    if(iAdd > iSum)
    {
        return iAdd - iSum;
    }
    else
    {
        return iSum - iAdd;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = DisplayFactor(iValue);

    printf("\nThe difference btw all factor and non factors of %d is %d",iValue,iRet);
    return 0;
}
/*
input: Enter Number: 12
output: The difference btw all factor and non factors of 12 is 22

time complexcity -->O(N)
*/
