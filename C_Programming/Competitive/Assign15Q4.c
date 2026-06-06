/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept N number from user and accepts range, Display all elements form that range
// Author: Smital Bajarang Satpute
// Date: 06/06/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iCount = 0;
    int iElement = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if((iElement>=iStart)&&(iElement<=iEnd))
        {
            printf("%d\t",iElement);
        }
    }        
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
    }

    printf("Enter %d  elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    printf("\nEnter your Range\n");

    printf("Start: ");
    scanf("%d",&iValue1);

    printf("End: ");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1, iValue2);

    return 0;
}
/*
input: Enter number of elements: 6
Enter 6  elements
Enter element: 12
Enter element: 24
Enter element: 36
Enter element: 44
Enter element: 57
Enter element: 77

Enter your Range
Start: 20
End: 70

output: 24      36      44      57
*/