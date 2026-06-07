import java.util.*;

class program143
{
    public static int Summation(int Arr[])
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return(iSum);
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the number of elements: ");


        int iLength = sobj.nextInt();  //variable is created where it is needed (instead of starting)

        //SIMILAR AS --> Brr = (int*)malloc(iLength * sizeof(int)) in C
        int Brr[] = new int [iLength];

        System.out.println("Enter element: ");
        
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] =sobj.nextInt();
        }

        System.out.println("Elements of the array are: ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);

        System.out.println("Summation is :"+iRet);

        Brr = null;  //Reference count will be 0
        System.gc(); //Requesting garbage collector to come
    }
} 
/*
input: Enter the number of elements:
3
Enter element:
10
20
30

output: Elements of the array are:
10
20
30
Summation is :60
*/           
