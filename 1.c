#include<stdio.h>

void main()
{
    int i,n,a=1;

    printf("Enter A Number:");
    scanf("%d",&n);

     printf("\nFactors Are:");

    for ( i = n; i >=1; i--)
    {
       if (n%i==0)
       {
             printf("%d\n",i);
       }
       
    }

    
    
}