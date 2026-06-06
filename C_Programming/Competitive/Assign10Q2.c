/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept width and height of rectangle from user and calculate its area.
// Author: Smital Bajarang Satpute
// Date: 29/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float width,float height)
{
    float fNum1 = width;
    float fNum2 = height;
    double dArea = 0.0;
    
    dArea = fNum1 * fNum2;

    return dArea;
}

int main()
{
    float iValue1 = 0.0f;
    float iValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width of rectangle: ");
    scanf("%f", &iValue1);

    printf("Enter height of rectangle: ");
    scanf("%f", &iValue2);

    dRet = RectArea(iValue1,iValue2);
    printf("Area of Rectangle is %lf",dRet);
    return 0;
}
/*
input:  Enter width of rectangle: 5.3
        Enter height of rectangle: 9.78
output: Area of Rectangle is 51.834000

time complexity --> O(1) because no loop
*/