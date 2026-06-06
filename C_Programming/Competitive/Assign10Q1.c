/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept radius of circle from user and calculate its area.
//              consider value of PI as 3.14
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0.0f;

    if(fRadius<0)
    {
        fRadius = -fRadius;
    }
    
    dArea = PI * fRadius * fRadius;

    return dArea;    
}

int main()
{
    float fValue = 0;
    double dRet = 0.0f;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The Area of circle having Radius %f is %lf",fValue,dRet);

    return 0;
}
/*
input: Enter Radius: 5.3
output: The Area of circle having Radius 5.300000 is 88.202609

time complexity--> O(1) because no loop
*/