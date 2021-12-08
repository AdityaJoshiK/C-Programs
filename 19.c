#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void traversal(struct node *ptr);

struct node *insertatfirst(struct node *head, int info);
struct node *insertinbetween(struct node *head, int info, int index);
struct node *insertafternode(struct node *head, struct node *prevnode, int info);
struct node *insertatend(struct node *head, int info);

struct node *deleteatfirst(struct node *head);
struct node *deleteinbetween(struct node *head,int index);
struct node *deleteatlast(struct node *head);
struct node *deleteatvalue(struct node *head,int value);


void ctraversal(struct node *head);
struct node * cinsertatfirtst(struct node *head,int info);

void main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node *));

    head->info = 1;
    head->link = second;

    second->info = 2;
    second->link = third;

    third->info = 3;
    third->link = fourth;

    fourth->info = 4;
    fourth->link = NULL;

    traversal(head);

   head=insertatfirst(head,20);
    printf("\nAfter This Function:\n");

    traversal(head);
}

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->info);
        ptr = ptr->link;
    }
}

struct node *insertatfirst(struct node *head, int info)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->info = info;
    ptr->link = head;
    return ptr;
}

struct node *insertinbetween(struct node *head, int info, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    for (int i = 0; i != index - 1; i++)
    {
        p = p->link;
    }

    ptr->info = info;
    ptr->link = p->link;
    p->link = ptr;

    return head;
}

struct node *insertatend(struct node *head, int info)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    int i = 0;

    while (p->link != NULL)
    {
        p = p->link;
        i++;
    }
    ptr->info = info;
    p->link = ptr;
    ptr->link = NULL;

    return head;
}

struct node *insertafternode(struct node *head, struct node *prevnode, int info)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->info = info;

    ptr->link = prevnode->link;
    prevnode->link = ptr;

    return head;
}

struct node *deleteatfirst(struct node *head)
{
    struct node *ptr=head;
    head=head->link;
    free(ptr);

    return head;
}

struct node *deleteinbetween(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=p->link;

    int i=0;

   for (int i = 0; i < index-1; i++)
   {
       p=p->link;
       q=q->link;
   }

    p->link=q->link;
    free(q);

    return head;
    
}

struct node *deleteatlast(struct node *head)
{
    struct node *p=head;
    struct node *q=p->link;

    int i=0;

    while (q->link!=NULL)
    {
        p=p->link;
        q=q->link;
    }

    p->link=NULL;
    free(q);

    return head;
}

struct node *deleteatvalue(struct node *head,int value)
{
   struct node *p=head;
   struct node *q=p->link;

   while (q->info!=value && q->link!= NULL)
   {
       p=p->link;
       q=q->link;
   }

   if (q->info==value)
   {
       p->link=q->link;
       free(q);
   }
   else
   {
       printf("\nElement Not Found!!\n");
   }
   
   return head;
   
}

void ctraversal(struct node *head)
{
    struct node *ptr=head;

    do
    {
        printf("Element:%d\n",ptr->info);
        ptr=ptr->link;
    } while (ptr!=head);
    
}

struct node * cinsertatfirtst(struct node *head,int info)
{
      struct node *ptr=(struct node *)malloc(sizeof(struct node));
      struct node *p=head->link;

      ptr->info=info;

      while (p->link!=head)
      {
          p=p->link;
      }

      p->link=ptr;
      ptr->link=head;
      head=ptr;
      
      return head;
      
}