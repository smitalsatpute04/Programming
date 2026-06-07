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
};

int main()
{   
    ArrayX *aobj1 = new ArrayX();  //Parameterized constructor
    ArrayX *aobj2 = new ArrayX(15); //Parameterized constructor

    // LOGIC (Function Call)

    

    delete aobj1;
    delete aobj2;
    

    return 0;
}
/*

*/