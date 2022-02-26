#include<stdio.h>
int main()
{
    int i,n;
    printf("WHICH NUMBER DO YOU WANT TO CHECK?\n");
    scanf("%d",&n);
    switch(n%2) //checking by 2
    { 
        case 0:
            printf("Divisible by 2.\n");
            break;
        case 1:
            printf("Not divisible by 2.\n");
            break;
    }
    switch(n%7) //checking  by 7
    { 
        case 0:
            printf("Divisible by 7.\n");
            break;
        default :
            printf("Not divisible by 7.\n");
            break;
    }
    switch(n%11) //checking by 11
    { 
        case 0:
            printf("Divisible by 11.\n");
            break;
        default:
            printf("Not divisible by 11.\n");
            break;
    }
return 0;
}