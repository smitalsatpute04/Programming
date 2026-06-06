/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and accept anothe number as NO, return index of its 1st occurance.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength,int iValue)
{
    int iCnt = 0;
    int iElement = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement == iValue)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int iNo = 0;
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    printf("Enter your favourite elements :");
    scanf("%d", &iNo);
    

    iRet = Frequency(p, iSize,iNo);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurance of your fav number is at index %d",iRet);
    }
    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element: 11
Enter element: 22
Enter element: 33
Enter element: 55
Enter element: 66
Enter element: 77
Enter your favourite elements :55

output: First occurance of your fav number is at index 3

*/