/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return frequency of even elements.
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

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        iElement = Arr[iCnt];

        if(iElement % 2 == 0)
        {
            iEven++;
        }
    }

    return iEven;
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

    printf("Even elements are %d",iRet);

    return 0;
}
/*
input: Enter number of elements: 7
Enter 7 elements
Enter element: 12
Enter element: 33
Enter element: 44
Enter element: 32
Enter element: 56
Enter element: 43
Enter element: 77

output: Even elements are 4
*/