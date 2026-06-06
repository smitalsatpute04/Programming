/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return the multiplication of all digits.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d  ",iDigit);

        iCnt = iCnt * iDigit;

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
    printf("\nThe multiplication of digits is %d",iRet);

    return 0;
}
/*
input: Enter number: 12345
output: 5  4  3  2  1
       The multiplication of digits is 120

time complexity --> O(log N)       
*/