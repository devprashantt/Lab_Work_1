#include<stdio.h>
int main()
{
    int i,a,b,HCF;
    printf("What are the numbers whose HCF you want to find?\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            HCF=i;
        }
    }
    printf("Highest Common Factor=%d",HCF);
return 0;
}