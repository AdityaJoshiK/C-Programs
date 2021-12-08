#include<stdio.h>

#define N 50
int s[N],top=-1;
char x;

void push(char x);
char pop();

void main()
{
    int ctr_b=0,j=0;
    char str[20],next;

    printf("Enter String:");
    scanf("%s",str[N]);

    next=str[j];
    j++;

    while (next='\0')
    {
       if(next='a')
       {
           push(next);
       }
       else{
           ctr_b++;
       }

       next=str[j];
       j++;

       while (top!=-1)
       {
        pop();
        ctr_b--;
       }
       if (ctr_b!=0)
       {
           printf("Invalid String");
       }
       else{
           printf("Valid String");
       }
       
       
    }
    
}

void push(char x)
{
    if (top>=N)
    {
        printf("Overflow");
        return;
    }
    top++;
    s[top]=x;
    return;
}

char pop()
{
    if (top==-1)
    {
        printf("Underflow");
    }
    top--;
    return s[top+1];
    
}