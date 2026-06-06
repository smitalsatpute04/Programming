/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accepts numner from user and display multiplication of its factor
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
            iMul = iMul * iCnt;
        }

    }

    return iMul;
}
 
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);

    printf("\nThe multiplication of factors of %d is : %d", iValue, iRet);
    return 0;
}
/*
input: Enter the number: 12
output: 1       2       3       4       6
        The multiplication of factors of 12 is : 144

Time complexcity --> O(N/2)
*/
