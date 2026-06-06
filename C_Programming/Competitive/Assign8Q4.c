/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept temperature in fahrenheit from user and convert it in celcius
//              Celcius = (Fh - 35)*(5.0/9.0)
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhToCs(float fTemp)
{
    float fFeh = fTemp;
    double dCel = 0.0;

    dCel = (fFeh - 32) * (5.0/9.0);
    
    return dCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temparature %f Fahrenheit in Celcius is %lf Cs ",fValue, dRet);

    return 0;
}
/*
input: Enter Temperature in Fahrenheit: 37
output: Temparature 37.000000 Fahrenheit in Celcius is 2.777778 Cs

time complexcity --> O(1) because no loop
*/