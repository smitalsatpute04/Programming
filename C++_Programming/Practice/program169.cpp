#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:   
        int *Arr;
        int iSize;

    public:    
        //parameterized constructor with default argument
        ArrayX(int X = 5)  // if parameter is passed it will act as parameterized connstructor otherwise as by default value of X = 5
        {   
            iSize = X;              
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;         
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements: \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elemenys of the array are: \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt= 0;
            int iSum = 0;

            for(iCnt =0 ; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }
};

int main()
{   
    ArrayX *aobj = NULL;
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();
    
    iRet = aobj->Summation();
    cout<<"Summation is: "<<iRet<<"\n";

    delete aobj;

    return 0;
}
/*
input: Enter the number of elements :
5
Enter the elements:
10
20
30
40
50

output: Elemenys of the array are:
10
20
30
40
50
Summation is: 150
*/