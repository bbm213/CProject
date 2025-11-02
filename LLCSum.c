#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
}*first = NULL;

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

int RSum(struct Node* p) 
{
    if (p == NULL) {
        return 0;
    } else {
        return RSum(p->next) + p->data;
    }
}
 

int LS(struct Node* p) 
{
    int sum = 0;
    while (p) {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    return 0;
}