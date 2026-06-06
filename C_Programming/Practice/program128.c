#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true; //bad programming
            break;
        }
    }

    return false;

}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter number of element: ");
    scanf("%d",&iLength);

    Brr = (int*)malloc(iLength * sizeof(int));

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element: ");
        scanf("%d", &Brr[iCnt]);
    }

    bRet = LinearSearch(Brr,iLength);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}
/*
input: Enter number of element: 5
Enter 5 elements
Enter element: 11
Enter element: 12
Enter element: 33
Enter element: 11
Enter element: 11

output: Eleven occurs 3 times
*/