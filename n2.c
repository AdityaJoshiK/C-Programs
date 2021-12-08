#include <stdio.h>

void main()
{
    int n, a[n];
    int sum = 0, e = 0,i;

    printf("Enter Size Of Array:");
    scanf("%d", &n);

    for (i = 0; i <= n - 1; i++)
    {
        printf("\nEnter a[%d]:", i);
        scanf("%d", &a[i]);
    }

    for (i=0; i<=n-1;i++)
    {
        if (a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("Odd Sum:%d", sum);

     for (i=0; i<=n-1; i++)
    {
        if (a[i]%2==0)
        {
            e=e+a[i];
        }
    }
      printf("\nEven Sum:%d", e);
}