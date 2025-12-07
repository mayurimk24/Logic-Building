////////////////////////////////////////////////////////////
//
//    Required Header files
//
////////////////////////////////////////////////////////////

#include<stdio.h>    //for i/o printf, scanf
#include<stdbool.h>   //for the bool only

//////////////////////////////////////////////////////////
//
//    Function name  : CheckEvenOdd
//    Description    : It is used to check even or odd
//    Input          : Integer
//    Output         : Boolean
//    Author         : Mayuri Mahadev Mhaske
//    Date           : 23/11/2025
//
//////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
   int iRet = 0;

   iRet = iNo % 2;

   if(iRet == 0)
   { return true; }
   else
   { return false; }
}

////////////////////////////////////////////////////////
//
//    Entry Point function for the application
//
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is even number \n",iValue); }
    else
    { printf("%d is odd number \n",iValue); }
    
    return 0;
}