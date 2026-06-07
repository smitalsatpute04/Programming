#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Constructor
        ArrayX(int X)
        {   
            cout<<"Inside Constructor\n";
            iSize = X;              //Characteristics initialisation
            Arr = new int[iSize];   //Resource allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;          //Resource deallocation
        }
};

int main()
{
    //Static memory Allocation for OBJECT
    // ArrayX aobj1(5);
    
    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1;
    //by delete aobj; --> aobj1 jyala point kartoy (Arr) tyala sangitla jail its time to baher padne, Arr la vicharla jail shevatchi ichha
    // i.e., destructor soo array on heap will jail. then aobj jyala point karto to jail, then after closing surly bracket of main aobj 1 jail

    cout<<"End of main\n";

    return 0;
}
/*

*/