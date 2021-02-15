/*MY FIRST PROGRAM ON LINKED LIST*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{
int data;
struct node *next;
}node;
void main()
{int n,i;node *head,*p,*q,*x;clrscr();
head=(node*)malloc(sizeof(node));
printf("Enter data of first node\n");
scanf("%d",&head->data);
head->next=NULL;
q=head;
printf("How many numbers do you want to enter in the linked list\n");
scanf("%d",&n);
printf("Enter the numbers\n");
for(i=0;i<n;i++)
 {
  p=(node*)malloc(sizeof(node));
  scanf("%d",&p->data);
  p->next=NULL;
  q->next=p;
  q=p;
 }
printf("Your inputted data in the linked list are\n");
x=head;
while(x!=NULL)
{printf("%d ",x->data);
x=x->next;
}
getch();
}

