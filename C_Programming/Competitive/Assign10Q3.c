/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept distance in km from user and calculate its distance in meter (1km = 1000m)
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int KMToMeter(int iNo)
{
    int iKM = iNo;
    int iDist = 0;

    iDist = iKM * 1000;

    return iDist;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your Distance in kilometer: ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    printf("The distance of %d Kilometer is %d meters",iValue,iRet);
    return 0;
}
/*
input: Enter your Distance in kilometer: 12
output: The distance of 12 Kilometer is 12000 meters

time complexity--> O(1) because no loop
*/