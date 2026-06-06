/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and check whether it contains zero or not.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            break;
        }

        iNo = iNo /10;
    }

    if(iDigit == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not contain Zero");
    }

    return 0;
}
/*
input: Enter number :123078
output: It contains Zero

input: Enter number :12345
output: It does not contain Zero
*/