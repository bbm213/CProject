#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;

}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void RecDisplay (struct Node *p)
{
  if (p!=NULL)
  {
    printf("%d",p->data);
    RecDisplay(p->next);  
  }
  
}

int main()
{
  int A[]= {1,2,3,4};
  create(A,4);
  RecDisplay(first);
}