
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


typedef struct
{int data;
struct cnode *next;
}cnode;
void main()
{cnode *head,*p,*q,*r;int i,n;
clrscr();
printf("1st element\n");
head=(cnode*)malloc(sizeof(cnode));
scanf("%d",&head->data);
head->next=head;
printf("Number of xtra elements\n");
scanf("%d",&n);
q=head;
for(i=0;i<n;i++)
{printf("Nter %d th element\n",i+2);
p=(cnode*)malloc(sizeof(cnode));
scanf("%d",&p->data);
q->next=p;
p->next=head;
q=p;
}
printf("Circular Linked list thus formed is\n");
r=head;
while(r->next!=head)
{printf("%d\t",r->data);
r=r->next;}
printf("%d\t",r->data);
getch();}