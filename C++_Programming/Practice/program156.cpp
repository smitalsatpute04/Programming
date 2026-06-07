#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {   

        }
};

int main()
{
    ArrayX aobj(5);    //NO ERROR

    cout<<sizeof(aobj)<<endl; //8 bytes due to pragma pack(1)

    return 0;
}
/*

*/