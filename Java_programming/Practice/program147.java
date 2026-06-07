import java.util.Scanner;

class ArrayX
{
    public void Update(int Arr[])
    {
        int iCnt = 0;

    for(iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        Arr[iCnt]++;
    }
    }
}

class program147
{
    public static void main(String A[])
    {
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0;


        System.out.println("Array before function call: \n");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt] +"\t");
        }

        ArrayX aobj = new ArrayX();
        aobj.Update(Brr);

        System.out.println("\n");

        System.out.println("Array after function call: \n");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }

    }
}
/*
output: 
Array before function call:

10      20      30      40      50

Array after function call:

11      21      31      41      51
*/