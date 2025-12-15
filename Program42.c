#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ ) //Short hand assignment operations
    {
        if(iCnt % 2 == 0)
        {
           printf("%d\t",iCnt);
        }
    }
    printf("\n");
}//time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter Frequency \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}