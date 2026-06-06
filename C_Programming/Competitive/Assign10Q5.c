/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept area in square feet from user and converte it into square meter (1 sq feet = 0.0929 sq m)
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double SquareMeter(int iNo)
{
    int iNum = iNo;
    double dArea = 0.0;

    dArea = (iNum * 0.0929);

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is: %lf",dRet);

    return 0;
}
/*
input: Enter Area in Square Feet: 7
output: Area in Square meter is: 0.650300

time complexit --> O(1) because no loop
*/