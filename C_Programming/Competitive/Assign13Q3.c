/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Description: Write program which accept number from user and display all such elements which are divisible by 5 and even.
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

        if((iElement % 5 == 0)&&(iElement % 2 == 0))
        {
            printf("%d\t",iElement);
        }
    }
}

int main ()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);


    return 0;
}
/*
input: Enter number of elements : 6
Enter 6 elements
Enter element: 10
Enter element: 22
Enter element: 34
Enter element: 30
Enter element: 45
Enter element: 44
output: 10      30
*/