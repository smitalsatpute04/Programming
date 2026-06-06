/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and check whether it contains 11 or not.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEleven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement == 11)
        {
            break;
        }
    }

    if(iElement == 11)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = ChkEleven(p, iSize);

    if(bRet == TRUE)
    {
        printf(" 11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }

    free(p);

    return 0;
}
/*
input: Enter number of elements :5
Enter 5 elements
Enter element: 23
Enter element: 45
Enter element: 43
Enter element: 11
Enter element: 4

output: 11 is Present

input: Enter number of elements :5
Enter 5 elements
Enter element: 23
Enter element: 12
Enter element: 55
Enter element: 67
Enter element: 44

output: 11 is Absent
*/