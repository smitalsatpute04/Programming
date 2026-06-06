/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display below pattern.
//              Enter number: 5
//              *  *  *  *  *  #  #  #  #  #
// Author: Smital Bajarang Satpute
// Date: 28/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    iCnt = iNo;
    
    for(iCnt=1; iCnt <= iNo; iCnt ++)
    {
        printf("*  ",iCnt);
        
    }
    for(iCnt=1; iCnt <= iNo; iCnt ++)
    {
        printf("#  ",iCnt);
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*
input: Enter number: 5
output:*  *  *  *  *  #  #  #  #  #

time Complexcity: O(N) + O(N) = O(2N)
*/