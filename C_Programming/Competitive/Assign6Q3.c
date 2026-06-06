/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program to find factorial of given number.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Factorial(int iNo)
{
    int iCnt = 0;
    int iFac = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        iFac = iFac * iCnt;
        printf("%d * ",iCnt);

    }
    
    printf("\n The factorial is %d",iFac);

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Factorial(iValue);

    return 0;
}

/*
input: 5
output: 5 * 4 * 3 * 2 * 1
       The factorial is 120

Time Complexcity: O(N)       
*/