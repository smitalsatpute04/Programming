/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return the count of digits btw 3 and 7.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d  ",iDigit);

        if((iDigit > 3)&&(iDigit < 7))
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);
    printf("\nThe count of digits btw 3 and 7 is %d",iRet);

    return 0;
}
/*
input: Enter number: 124564298
output: 8  9  2  4  6  5  4  2  1
        The count of digits btw 3 and 7 is 4

time complexity --> O(log N)
*/