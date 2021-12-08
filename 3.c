#include<stdio.h>

void main()
{
    int n,i,a=0;

    printf("Enter Number:");
    scanf("%d",&n);
    
    for ( i = 2; i <=n/2; i++)
    {
        if (n!=1 && n%i==0)
        {
            a=1;
            break;
        }
        
    }

    if (a==0 && n!=1)
    {
        printf("%d Is Prime",n);
    }
    else{
        printf("%d is not Prime",n);
    }
    
}