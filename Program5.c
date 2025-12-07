#include<stdio.h>

int main()
{
    int i = 0 , j = 0, ans = 0;

    printf("Enter First Number : \n");
    scanf("%d", &i);

    printf("Enter Second Number : \n");
    scanf("%d", &j);

    ans = i + j;     //Bussiness Logic

    printf("Addtion is : %d \n", ans);

    return 0;
}