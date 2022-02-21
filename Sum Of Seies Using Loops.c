#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("UPTO WHICH NUMBER DO U WANT TO SUM-\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=(sum+i);       
    }
printf("HERE IS YOUR SUM VALUE = %d",sum);
return 0;
}