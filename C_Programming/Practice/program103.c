//Program of pointer

#include <stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr) ++;   //12
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);

    printf("Value after function call: %d\n",iValue);
    
    return 0;
}
/*
output: Value after function call: 12
*/