#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("WHICH NUMBER FACTORIAL YOU WANT TO FIND?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=(fact*i);
    }
printf("Here is your Factorial\n%d",fact);
return 0;
}