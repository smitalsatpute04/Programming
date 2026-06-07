#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:   //hyachya mule errror aala
        int *Arr;
        int iSize;

    public:    
        ArrayX(int X)
        {   
            iSize = X;              
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;         
        }
};

int main()
{   
    ArrayX *aobj1 = new ArrayX(5);

    // LOGIC (Function Call)
    cout<<aobj1->iSize<<"\n";   //ERROR

    aobj1->iSize = 0;   //ERROR

    aobj1->Arr - NULL;  //ERROR

    delete aobj1;
    

    return 0;
}
/*
output: 5
*/