#include<stdio.h>

#define n 5
int q[n];

int f=-1,r=-1,y;

void enqueue(int x)
{
    if (r>=n)
    {
        printf("Overflow");
    }

    else if (f=r=-1)
    {
       f=r=0;
       
    }

    else
    {
       r=r+1;
       q[r]=x;
     
    }
}

int dequeue()
{
    if (f==-1)
    {
      printf("Underflow");
    }
    else if (f==r)
    {
        f=r=-1;
    }
    else
    {
        y=q[f];
        f++;
        return y;
    }   
}

void display()
{
    int i;

    if (f==-1)
    {
        printf("Underflow");
    }
    else{
        for ( i = f; i<=r; i++)
        {
            printf(" |%d| ",q[i]);
        }
        printf("\n");
    }
    
}

void main()
{  
    int choice,x;

    enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  enqueue(6);

  display();
  dequeue();      
//    do{
//          printf("\nEnter 1 For Insert\n");
//          printf("Enter 2 For Delete\n");
//          printf("Enter 3 For Display\n");
//          printf("Enter 0 For EXIT\n");
//          scanf("%d",&choice);

//          switch (choice)
//          {
//          case 1:
//              printf("Enter Value For PUSH:");
//              scanf("%d",&x);
//              enqueue(x);
//              break;

//          case 2:
//              x=dequeue();
//              if (x!=0)
//              {
//                  printf("Poped Value Is %d\n",x);
//              }
             
//              break;   
         
//          case 3:
//              display();
//              break;

//          case 0:
//              break;

//          default:
//              printf("Wrong Choice Try Again");
//              break;
//          }

//      } while (choice!=0);
}

