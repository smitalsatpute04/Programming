/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display its table.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
        printf("Your entered number will be treated as positive number and here is your table!!");
    }

    for(iCnt = 1; iCnt <= 10; iCnt ++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
/*
input: 5
output: 5   10  15  20  25  30  35  40  45  50

Tiime Complexcity: O(1) because it iteration is constant for 10 times
*/