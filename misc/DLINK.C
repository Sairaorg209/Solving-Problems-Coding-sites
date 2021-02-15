#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{int data;
struct dnode *next;
struct dnode *prev;
}dnode;

void display(dnode *h);
void reverseprintdlink(dnode *h);

void main()
{
dnode *head,*p,*q;int n,i,j;clrscr();
printf("Creating doubly linked list\n");
printf("Enter 1st element\n");
head=(dnode *)malloc(sizeof(dnode));
scanf("%d",&head->data);
head->prev=NULL;
head->next=NULL;
p=head;
printf("How many xtra elements?\n");
scanf("%d",&n);
printf("Enter %d element\n",n);
for(i=0;i<n;i++)
{
q=(dnode *)malloc(sizeof(dnode));
scanf("%d",&q->data);

p->next=q;
q->prev=p;
q->next=NULL;
p=q;
}
do{
printf("\nType\n 1 to display it\n 2 to reverse display it\n 3 to exit\n");
scanf("%d",&j);
if(j==1)
{display(head);}
if(j==2){reverseprintdlink(head);}
if(j==3)
{break;}}while(1);
getch();
}
void display(dnode *h)
{
dnode *r;
r=h;printf("Displaying doubly linked list\n\n");
while(r!=NULL)
{printf("%d\t",r->data);
r=r->next;
}
}
void reverseprintdlink(dnode *h)
{dnode *r;printf("\n\nDisplaying reversed doubly linked list\n\n");
r=h;
while(r->next!=NULL)
{r=r->next;}
while(r!=NULL)
{printf("%d\t",r->data);
r=r->prev;
}

}