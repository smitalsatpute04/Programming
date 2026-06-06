#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//TIME COMPLEXITY --> O(N) where N is value of iCnt
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    int iValue = 0;
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

    printf("Enter the elements that you want to search : \n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr,iLength,iValue);

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
Enter element: 45
Enter element: 34
Enter element: 89
Enter element: 56
Enter element: 76
Enter the elements that you want to search :
34
Element is present

input: Enter number of element: 5
Enter 5 elements
Enter element: 12
Enter element: 34
Enter element: 22
Enter element: 56
Enter element: 43
Enter the elements that you want to search :
29
Element is not present
*/