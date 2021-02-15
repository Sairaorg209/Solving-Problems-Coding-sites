
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{int coeff,exp;
struct pnode *next;
}pnode;



void main()
{pnode *p1,*p2,*rslt=NULL,*q,*r1,*r3,*r,*p,*pl,*pl1;

int newcoeff,newexp,i,n,n1;clrscr();
printf("1st element of 1st polynomial(coefficient and exponent)\n");
p1=(pnode*)malloc(sizeof(pnode));
scanf("%d%d",&p1->coeff,&p1->exp) ;
p1->next=NULL;
printf("no. of xtra elements?\n");
scanf("%d",&n);
pl=p1;
for(i=0;i<n;i++)
{printf("%d th element of 1st polynomial(coefficient and exponent)\n",i+2);
p=(pnode*)malloc(sizeof(pnode));
scanf("%d%d",&p->coeff,&p->exp);
p->next=NULL;
pl->next=p;
pl=p;
}
printf("1st element of 2nd polynomial(coefficient and exponent)\n");
p2=(pnode*)malloc(sizeof(pnode));
scanf("%d%d",&p2->coeff,&p2->exp) ;
p2->next=NULL;
printf("no. of xtra elements?\n");
scanf("%d",&n1);
pl1=p2;
for(i=0;i<n1;i++)
{printf("%d th element of 1st polynomial(coefficient and exponent)\n",i+2);
q=(pnode*)malloc(sizeof(pnode));
scanf("%d%d",&q->coeff,&q->exp);
q->next=NULL;
pl1->next=q;
pl1=q;
}
printf("So the 1st polynomial thus formed is\n");
pl=p1;
while(pl->next!=NULL)
{printf("%dx^(%d)+",pl->coeff,pl->exp);
pl=pl->next;}
printf("%dx^(%d)",pl->coeff,pl->exp);

pl1=p2;printf("\nAnd the 2nd polynomial thus formed is\n");

while(pl1->next!=NULL)
{printf("%dx^(%d)+",pl1->coeff,pl1->exp);
pl1=pl1->next;}
printf("%dx^(%d)",pl1->coeff,pl1->exp);

pl=p1;pl1=p2;
while(pl1!=NULL)
{while(pl!=NULL)
 {newcoeff=pl1->coeff * pl->coeff;newexp=pl1->exp + pl->exp;pl=pl->next;
 }
if(newcoeff!=0)
{
r1=(pnode*)malloc(sizeof(pnode));
r1->coeff=newcoeff;r1->exp=newexp;
r1->next=NULL;
if(rslt==NULL)
{rslt=r1;r3=rslt;}

else {r3->next=r1;r1=r3;}
}
pl1=pl1->next;
}
printf("\nRESULT\n");
r=rslt;
while(r!=NULL)
{printf("%dx^(%d)+",r->coeff,r->exp);
r=r->next;}
printf("%dx^(%d)",r->coeff,r->exp);

getch();
}