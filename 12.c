#include<stdio.h>

#define N 50

int s[N],x,top=-1;

void push(int x);
int pop();
int peep();
int change();
int display();

void main()
{
     int choice,i;

     do
     {
         printf("\nEnter 1 For PUSH\n");
         printf("Enter 2 For POP\n");
         printf("Enter 3 For PEEP\n");
         printf("Enter 4 For CHANGE\n");
         printf("Enter 5 For DISPLAY\n");
         printf("Enter 0 For EXIT\n");
         scanf("%d",&choice);

         switch (choice)
         {
         case 1:
             printf("Enter Value For PUSH:");
             scanf("%d",&x);
             push(x);
             break;

         case 2:
             x=pop();
             if (x!=0)
             {
                 printf("Poped Value Is %d\n",x);
             }
             
             break;    
         
         case 3:
             printf("Enter Position From TOP:");
             scanf("%d",&i);
             x=peep(i);
             if (x!=0)
             {
                 printf("Peeped Value Is %d\n",x);
             }
             
             break;
        
        case 4:
             printf("Enter Position From TOP:");
             scanf("%d",&i);
             printf("Enter New Value:");
             scanf("%d",&x);
             change(i,x);
             break;
         
         case 5:
             display();
             break;

         case 0:
             break;

         default:
             printf("Wrong Choice Try Again");
             break;
         }

     } while (choice!=0);
     
}

void push(int x)
{
    if (top>=N)
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        top=top+1;
        s[top]=x;
        return;
    }
    
}

int pop()
{
    if (top==-1)
    {
        printf("STACK UNDERFLOW");
        return 0;
    }
    top=top-1;
    return s[top+1];
    
}

int peep(int i)
{
    if (top-i+1<-1)
    {
        printf("STACK UNDERFLOW");
        return 0;
    }
    return s[top-i+1];
    
}

int change(int i,int x)
{
    if (top-i+1<-1)
    {
        printf("STACK UNDERFLOW");
        return 0;
    }
    s[top-i+1]=x;
    return 0;
    
}

int display()
{
    int k;
    if (top==-1)
    {
        printf("STACK UNDERFLOW");
        return 0;
    }
    for ( k = top; k >= 0; k--)
    {
        printf("%d\n",s[k]);
    }
   
    
}