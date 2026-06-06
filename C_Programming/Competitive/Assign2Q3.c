/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept one number from user if number is less than 10 print "Hello" otherwise print "Demo"
// Author: Smital Bajarang Satpute
// Date: 23/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}