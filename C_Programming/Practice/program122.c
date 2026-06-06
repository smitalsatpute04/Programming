#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
} 

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;

    int iRet = 0;

    //STEP 1:- Accept the number of elements
    printf("Enter number of elemets: \n");
    scanf("%d",&iLength);

    //Step 2:- Allocate the memory
    Brr = (int *) malloc(iLength * sizeof(int));

    //STEP 3:- Accept the values from user
    printf("Enter the elements: \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //STEP 4:- Use the memory (LOGIC)
    iRet = Summation(Brr,iLength);

    printf(" The summation of elements is: %d",iRet);

    //STEP 5:- Deallocate the memory
    free(Brr);
    return 0;
}
/*
input: 
    Enter number of elemets:
    5
    Enter the elements:
    10
    20
    30
    40
    50

output: 
    The summation of elements is: 150
*/