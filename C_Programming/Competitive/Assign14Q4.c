/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and return frequency of 11 from it.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement == 11)
        {
            iFreq ++;
        }
    }

    return iFreq;
}

int main()
{
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

    iRet = Frequency(p, iSize);

    printf("11 occurs %d times", iRet);

    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element: 12
Enter element: 11
Enter element: 33
Enter element: 41
Enter element: 11
Enter element: 11

output: 11 occurs 3 times
*/