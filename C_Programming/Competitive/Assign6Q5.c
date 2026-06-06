/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display its reverse table.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >=1; iCnt--)
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

    RevTable(iValue);
    return 0;
}

/*
input: 5
output: 50  45  40  35  30  25  20  15  10  5

Tiime Complexcity: O(1) because it iteration is constant for 10 times
*/