#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
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

    cout<<"Enter number of element: ";
    cin>>iLength;

    //C --> (int *)malloc(iLength * sizeof(int));
    //JAVA -> Brr = new int[iLength];
    Brr = new int[iLength];

    cout<<"Enter the elements: \n";
 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of array are : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet = Summation(Brr, iLength);

    cout<<"Summation is: "<<iRet<<endl;

    delete []Brr; //due to this [] entire array will deallocate

    return 0;
}
/*
input: Enter number of element: 3
Enter the elements:
10
20
30
output: Elements of array are :
10
20
30
Summation is: 60

*/