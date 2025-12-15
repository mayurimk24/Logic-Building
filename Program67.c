
// Iteration

#include<stdio.h>  

void DisplayDigits(int iNo)
{
   int iDigit = 0;

   printf("_______________________________________\n");

   printf("Original of value of iNo is : %d\n", iNo);

   printf("_____________________________________\n");   //strip line

   while(iNo != 0)
   {
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is :%d\n",iNo);
   }

   printf("_____________________________________\n");
    
}

int main()
{
     int iValue = 0;

     printf("Enter number :\n");
     scanf("%d", &iValue);

     DisplayDigits(iValue);

     return 0;
}