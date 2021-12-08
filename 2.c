#include<stdio.h>

int factorial(int n);

void main()
{
    int n;

    printf("Enter Number:");
    scanf("%d",&n);

    printf("=%d",factorial(n));
}

int factorial(int n)
{
    int i;

    for ( i = n; i > 0; i--)
    {
        if (i==1)
        {
            printf("1");
        }
        else{
        printf("%d*",i);
        }
        if (n==0)
        {
           return 1;
        }
        else if (n==1)
        {
            return 1;
        }
         else
         {
             return n*factorial(n-1);
             }
    }
    
}