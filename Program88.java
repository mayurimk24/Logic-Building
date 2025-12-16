// Que. Factorial for given number
// Input : 5
// Output : 5*4*3*2*1 = 120

import java.util.*; 

class Number
{
    public long CalculateFactorial(int iNo)
    {
        int i = 0;
        long iFact = 1;  //Important

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(i = 1; i<= iNo ; i++)
        {
            iFact = iFact * i;
        }

        return iFact;
    }

} //End of number class

class Program88
{
    public static void main(String A[]) // Commant line Argument
    {
        int iValue = 0;
        long iRet = 0;

        Scanner sobj = new Scanner(System.in);  //Object
        
        System.out.println("Enter a number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();   //Object
        iRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is :"+iRet);

        //Important
        sobj = null;
        nobj = null;

        System.gc();

    }
}