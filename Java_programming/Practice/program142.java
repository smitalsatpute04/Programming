import java.util.*;

class program142
{
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

        Brr = null;  //Reference count will be 0
        System.gc(); //Requesting garbage collector to come
    }
} 
/*
input: Enter the number of elements:
2
Enter element:
11
21

output: Elements of the array are:
11
21
*/           
