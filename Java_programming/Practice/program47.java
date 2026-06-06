//Reducing time complexity 

import java.util.*;

class NumberX
{
   public void DisplayFactors(int iNo)
   {
        //Logic
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)   // it reduces timecomplexity( i.e., no. of iteration)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
   }
}

class program47
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter number: ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();                  // object creation of class NumberX
        nobj.DisplayFactors(iValue);

    }
}

// time complexity : O(N/2)
// where N >= 0