#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{int data;
struct node *next;
}node;
void display(node *h);
void insanypos(node *h,int n);
void reverseprint(node *h);
void mergelinks(node *h,node *i);
void linksearch(node *h,int n);
void delet(node *h,int n);
void sortll(node *h);
void reverse(node *h);
void sortlink(node *h);

void main(){
node *head,*p,*q,*head1,*p1,*q1;int i,j,n,po,e,d,a;static int N;clrscr();
printf("Enter 1st element\n");
head=(node*)malloc(sizeof(node));
scanf("%d",&head->data);
head->next=NULL;
q=head;
printf("How many extra elements\n");
scanf("%d",&N);
printf("Enter %d elements\n",N);
for(i=1;i<=N;i++)
 {p=(node*)malloc(sizeof(node));
 scanf("%d",&p->data);
 p->next=NULL;
 q->next=p;
 q=p;}

printf("\nType \n0 to exit\n1 to display\n2 to enter element at any position\n3 to reverse print it\n4 to merge another linked list with it\n5 to search a value\n6 to delete a particular element\n7 to sort data\n8 to reverse it\n9 to sort data by changing links\n");
scanf("%d",&j);
switch(j)
{
case 0:
{break;}
case 1:
{display(head);
break;}
case 2:
{printf("Enter position(less than %d)\n",N+2);
scanf("%d",&po);
insanypos(head,po);
break;}
case 3:
{reverseprint(head);break;}
case 4:
{printf("Creating another linked list\n");
printf("Enter 1st element\n");
 head1=(node*)malloc(sizeof(node));
scanf("%d",&head1->data);
head1->next=NULL;
q1=head1;
printf("How many extra elements\n");
scanf("%d",&a);
printf("Enter %d elements\n",a);
for(i=1;i<=a;i++)
 {
 p1=(node*)malloc(sizeof(node));
 scanf("%d",&p1->data);
 p1->next=NULL;
 q1->next=p1;
 q1=p1;
 }
mergelinks(head,head1);break;}
case 5:
{printf("Enter the element you want to search\n");
scanf("%d",&e);
linksearch(head,e);break;}
case 6:
{printf("Enter position(less than %d)\n",N+2);
scanf("%d",&d);
delet(head,d);break;}
case 7:
{sortll(head);break;}
case 8:
{reverse(head);break;}

case 9:
{sortlink(head);}
}

getch();
}

void display(node *h)
{node *x;
x=h;printf("LINKED LIST IS\n");
while(x!=NULL)
{printf("%d\t",x->data);
x=x->next;
}}



void insanypos(node *h,int n)
{int n1=n;static int N;
if(n1==1)
 {node *p;
 p=(node*)malloc(sizeof(node));
 printf("Enter element\n");
 scanf("%d",&p->data);
 p->next=NULL;
 p->next=h;
 h=p;
 display(h);
 }
else if(n1==N)
 {node *x,*p;

 while(x->next!=NULL)
 x=x->next;

 p=(node*)malloc(sizeof(node));
 printf("Enter element\n");
 scanf("%d",&p->data);
 x->next=p;
 p->next=NULL;
 display(h);}
else
 {node *x,*p;int i;
 p=(node*)malloc(sizeof(node));
 printf("Enter element\n");
 scanf("%d",&p->data);
 p->next=NULL;
 x=h;
 for(i=1;i<n-1;i++)
 x=x->next;
 p->next=x->next;
 x->next=p;
 display(h);}
}

void reverseprint(node *h)
{node *x,*p=NULL;
x=NULL;printf("LINKED LIST IS\n");
while(p!=h)
{p=h;
while(p->next!=x)
{p=p->next;}
printf("%d\t",p->data);
x=p;}}

void mergelinks(node *h,node *h1)
{node *p,*q;
p=h;
while(p->next!=NULL)
{p=p->next;}
p->next=h1;q=h;
display(q);
}

void linksearch(node *h,int n)
{node *q;int c=0;
q=h;
while(q->data!=n)
{q=q->next;
c=c+1;}
printf("%d is present in %d th node",n,c+1);
}

void delet(node *h,int n)
{node *q,*p;int i;static int N;
if(n==1)
{p=h;
h=h->next;
p->next=NULL;
free(p);
}
else if(n==N)
{q=h;
while(q->next!=NULL)
{q=q->next;}
p=h;
while(p->next!=q)
{p=p->next;}
p->next=NULL;
free(q);
}
else
{p=h;
for(i=0;i<(n-2);i++)
{p=p->next;}
q=p->next;
p->next=q->next;
q->next=NULL;
free(q);}
display(h);
}

void sortll(node *h)
{node *p,*q;int t,c=0,i;
p=h;
while(p->next!=NULL)
{p=p->next;
c=c+1;}

for(i=1;i<=c;i++){
p=h;
while(p->next!=NULL)
{q=p->next;
if((p->data)>(q->data))
{
t=p->data;
p->data=(q->data);
(q->data)=t;
}
p=p->next;
}}
display(h);
}
void reverse(node *h)
{
node *p,*q,*r;
p=NULL;
q=h;
r=h->next;
while(q!=NULL)
{
q->next=p;
p=q;
q=r;
if(r!=NULL)
 r=r->next;
}
h=p;
printf("After REVERSING\n");
display(p);}

void sortlink(node *h)
{
node *p,*q,*r,*t;int c=0,i;

p=h;
while(p->next!=NULL)
{p=p->next;c=c+1;}

for(i=0;i<c;i++)
{r=NULL;p=h;q=h->next;
    while(q!=NULL)
      {if(r==NULL)
	{if(q->data < p->data)
		{p->next=q->next;
		 q->next=p;
		 t=p;p=q;q=t;r=p;h=r;
		}
		 else r=p;
	}
else {if(p->data > q->data)
      {p->next=q->next;r->next=q;q->next=p;r=r->next;
      }
 else r=r->next;
} }
p=p->next;q=q->next;
}
display(h);
}
