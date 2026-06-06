/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and accept anothe number as NO, check whether NO is present or not.
// Author: Smital Bajarang Satpute
// Date: 05/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkNumber(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;
    int iElement = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if(iElement == iValue)
        {
            break;
        }
    }

    if(iElement == iValue)
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
    int iNo = 0;
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

    printf("Enter your favourite elements :");
    scanf("%d", &iNo);

    bRet = ChkNumber(p, iSize, iNo);

    if(bRet == TRUE)
    {
        printf(" Your Favourite element is present");
    }
    else
    {
        printf("Your Favourite element is Absent");
    }

    free(p);

    return 0;
}
/*
input: Enter number of elements :6
Enter 6 elements
Enter element: 12
Enter element: 24
Enter element: 336
Enter element: 48
Enter element: 59
Enter element: 60
Enter your favourite elements :12

output: Your Favourite element is present
*/