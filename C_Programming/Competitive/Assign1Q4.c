/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept one number and check whether it is divisible by 5 or not
// Author: Smital Bajarang Satpute
// Date: 23/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }

    return 0;
}