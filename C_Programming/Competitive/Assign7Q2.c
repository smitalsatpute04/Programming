/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept amount in US Dollar & return its corresponding value in INR
//              consider 1$ = 70 rs.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iUS = 70;
    int iINR = 0;
    iINR = iNo * iUS;

    return iINR;
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your Dollar amount: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("The INR amount is %d",iRet);

    return 0;
}

/*
input: Enter your Dollar amount: 20
output: The INR amount is 1400
Time Complexcity --> O(1)  because no loop
*/