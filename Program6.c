#include<stdio.h>

int Add(int a, int b)
{
    int sum = 0 ;
    sum = a + b;   //Bussiness Logic
    return sum;
}

int main()
{
    int i = 0, j = 0, ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&i);

    printf("Enter Second number: \n");
    scanf("%d",&j);

    ans = Add(i,j);
    printf("Addtion is : %d\n",ans);
    
    return 0;
}