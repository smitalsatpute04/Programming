#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Defalt constructor
        ArrayX()
        {

        }

        //parameterized constructor
        ArrayX(int X)
        {   

        }
};

int main()
{
    ArrayX aobj1;    //NO ERROR --> due to there is default constructor (this object calls default contrustor)
    ArrayX aobj2(5); //this object calls parameterized comstructor

    cout<<sizeof(aobj1)<<endl; //8 bytes due to pragma pack(1)

    return 0;
}
/*

*/