#include<stdio.h>
int main()
{
    int i,n,series=0,start=1,total;
    printf("Upto which term you want to print?\n");
    scanf("%d",&n);
    printf("Here is your series-\n");
    for(i=1;i<=n;i++)
    {
        total=(series+start);
        printf("%d\n",total);
        series=start;
        start=total;
    }
    printf("The last term of series is = %d\n",total);
    return 0;
}