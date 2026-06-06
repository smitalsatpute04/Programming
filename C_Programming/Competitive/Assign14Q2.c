/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return diff btw frequency of even and odd elements.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Count(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        iElement = Arr[iCnt];

        if(iElement % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    iRet = Count(p, iSize);

    printf(" Diff btw frequency of even and odd elements is %d",iRet);

    return 0;
}
/*
input: Enter number of elements: 6
Enter 6 elements
Enter element: 12
Enter element: 13
Enter element: 43
Enter element: 56
Enter element: 88
Enter element: 32

output: Diff btw frequency of even and odd elements is 2
*/