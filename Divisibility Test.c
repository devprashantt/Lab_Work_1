#include<stdio.h>
int main()
{
    int i,n;
    printf("WHICH NUMBER DO YOU WANT TO CHECK?\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("NUMBER IS DIVIDED BY 2");
    }
    else if(n%7==0)
    {
        printf("NUMBER IS DIVIDED BY 7");
    }
    else if(n%11==0)
    {
        printf("NUMBER IS DIVIDED BY 11");
    }
return 0;
}