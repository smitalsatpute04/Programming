#include <stdio.h>

int main()
{
    int Arr[] = {10,20,30,40,50};

    printf("%d\n",Arr);
    printf("%d\n",&Arr);
    printf("%d\n",&Arr[0]);
    printf("%d\n",Arr);

    return 0;
}
/*
output:
6422284
6422284
6422284
6422284
*/