#include<stdio.h>

void main()
{
    int n,a[n];
    int sum=0,e=0;

    printf("Enter Size Of Array:");
    scanf("%d",&n);

    for (int i = 0; i <= n-1; i++)
    {
        printf("\nEnter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <= n-1; i++)
    {
        
        if (a[i]%2!=0)
        {
            sum=sum+a[i]; //0=0+1
        }
           printf("Odd Sum:%d",sum); 
    }
    // for (int i = 0; i <= n-1; i++)
    // {
    //     if (a[i]%2==0)
    //     {
    //         e=e+a[i];
    //     }
        
    // }


    // printf("Even Sum:%d",e);

    
    
}