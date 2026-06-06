/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display all such elements which are multiples of 11.
// Author: Smital Bajarang Satpute
// Date: 04/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iElement = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        iElement = Arr[iCnt];

        if(iElement % 11 == 0)
        {
            printf("%d\t", iElement);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}
/*
input: Enter number of elements: 6
Enter 6 elements
Enter element: 11
Enter element: 23
Enter element: 44
Enter element: 56
Enter element: 77
Enter element: 88

output: 11      44      77      88
*/