/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accepts numner from user and display summation of its all non factors 
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DisplayFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iNo %  iCnt != 0)
        {
            printf("%d\t", iCnt);
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = DisplayFactor(iValue);

    printf("\nThe summation of all non factors of %d is %d",iValue,iRet);
    return 0;
}
/*
input: Enter Number: 12
output: 5       7       8       9       10      11
       The summation of all non factors of 12 is 50

time complexcity -->O(N)       
*/