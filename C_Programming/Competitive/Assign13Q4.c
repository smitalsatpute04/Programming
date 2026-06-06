/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display all such elements which are divisible by 3 and 5.
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

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iElement = Arr[iCnt];

        if((iElement % 3 == 0)&&(iElement % 5 == 0))
        {
            printf("%d\t",iElement);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

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

    Display(p, iSize);

    free(p);

    return 0;
}
/*
input: Enter number of elements : 5
Enter 5 elements
Enter element: 12
Enter element: 15
Enter element: 20
Enter element: 30
Enter element: 55

output: 15  30
*/