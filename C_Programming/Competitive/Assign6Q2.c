/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept single digit number and print it in words.
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo > 9)
    {
        printf("Please enter valid Single Digit number");
    }

    if((iNo < 0)&&(iNo > -9))
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    if(iNo == 1)
    {
        printf("One");
    }
    if(iNo == 2)
    {
        printf("Two");
    }
    if(iNo == 3)
    {
        printf("Three");
    }
    if(iNo == 4)
    {
        printf("Four");
    }
    if(iNo == 5)
    {
        printf("Five");
    }
    if(iNo == 6)
    {
        printf("Six");
    }
    if(iNo == 7)
    {
        printf("Seven");
    }
    if(iNo == 8)
    {
        printf("Eight");
    }
    if(iNo == 9)
    {
        printf("Nine");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your Single Digit Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
input: 9
output: Nine

input: -7
output: Seven

input: 14
output: Please enter valid Single Digit number

Time Complexcity --> O(1) because no loop
*/