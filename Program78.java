import java.util.*; 

class Number
{
    public void DisplayFactors(int iNo)
    {
        int i = 0;

        for(i = 1 ; i <= (iNo /2); i++)
        {
            if(iNo % i ==0)
            {
                System.out.println(i);
            }
        }
    }
} //End of number class

class Program78
{
    public static void main(String A[]) // Commant line Argument
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);  //Object
        
        System.out.println("Enter a number :");
        iValue = sobj.nextInt();

        Number nobj = new Number();   //Object
        nobj.DisplayFactors(iValue);

        sobj = null;
        nobj = null;

        System.gc();
        //last 3 lines are important for interview

    }
}