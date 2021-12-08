#include<stdio.h>

void main()
{
    char s[15];
    int i,b,c;

    printf("Enter String:");
    scanf("%s",s);

    for ( i = 0; i < 14; i++)
    {
       
        if (s[i]==2)
        {
            s[i]='b';
            printf("\n%s",s[i]);
            printf("\nOutput:%s",s);
        }
        else if (s[i]==3)
        {
            s[i]='c';
        }
     
        
    }
    
    
    
    
}