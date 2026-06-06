/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept radius of circle from user and calculate its area.
//              consider value of PI as 3.14
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

float Area(int iNo)
{
    float PI = 3.14f;
    int iRadius = 0;
    float fArea = 0.0f;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    iRadius = iNo;
    fArea = PI * iRadius * iRadius;

    return fArea;    
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Radius: ");
    scanf("%d",&iValue);

    fRet = Area(iValue);
    printf("The Area of circle having Radius %d is %lf",iValue,fRet);

    return 0;
}
/*
input:  Enter Radius: 5
output: The Area of circle having Radius 5 is 78.500000
time complexcity is O(1) --> because no loop
*/