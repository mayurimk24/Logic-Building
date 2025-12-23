#include<stdio.h>

void Display(int Arr[])   // Arr[]  : internally pointer
{
    //code
    int iCnt = 0;

    for(iCnt = 0; iCnt < 7; iCnt++)   //Change
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50,60,70};    //change
    
    Display(Brr);  // Display(100);

    return 0;
}
