/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Accept number from user and print even factors of that number (if statement with && operator
// Author: Smital Bajarang Satpute
// Date: 27/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1; i<= iNo/2; i++)
    {
        if(((iNo) % (i)== 0)&&(i % 2 == 0))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}