#include<stdio.h>

void main()
{
    int a[5],*p[5],n=5;

    for (int i = 0; i < n-1; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    *p=a;
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d",i,*(&p+i));
    }
    
}