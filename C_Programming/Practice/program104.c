//Program of pointer

#include <stdio.h>

void Display(int *iPtr)
{
    printf("Value of iPtr: %d\n",iPtr);
}

int main()
{
    int Arr[5] = {10,20,30,40,50};
    
    printf("Base Address of Arr: %d\n",Arr);
    Display(Arr);

    return 0;
}
/*
output: 
Base Address of Arr: 6422284
Value of iPtr: 6422284
*/