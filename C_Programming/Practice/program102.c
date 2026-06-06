#include <stdio.h>

void CallByValue(int iNo)
{
    iNo ++;    //12
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);

    printf("Value after function call: %d\n",iValue);
    
    return 0;
}
/*
output: Value after function call: 11
*/