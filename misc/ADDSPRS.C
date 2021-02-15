#include<stdio.h>
#include<conio.h>

typedef struct
{int data,col,row;}
element;

typedef struct
{element e[25];}sparse;

int insrt(int a,int b)
{
b=a;
return b;}

void main()
{sparse *s1,*s3,*s2;int i,c;clrscr();
printf("Number of non-zero elements in 2 sparse matrices to be entered?\n");
scanf("%d",&c);
printf("Enter element value, row number and column number for 1st sparse matrix\n");
for(i=0;i<c;i++)
{scanf("%d%d%d",&s1->e[i].data,&s1->e[i].row,&s1->e[i].col);}
printf("\nDisplaying 1st sparse matrix\nValue\tRow\tColumn\n");
for(i=0;i<c;i++)
{printf("%d\t%d\t%d\n",s1->e[i].data,s1->e[i].row,s1->e[i].col);}

printf("\nEnter element value, row number and column number for 2nd sparse matrix\n");
for(i=0;i<c;i++)
{scanf("%d%d%d",&s2->e[i].data,&s2->e[i].row,&s2->e[i].col);}
printf("\nDisplaying 2nd sparse matrix\nValue\tRow\tColumn\n");
for(i=0;i<c;i++)
{printf("%d\t%d\t%d\n",s2->e[i].data,s2->e[i].row,s2->e[i].col);}

for(i=0;i<c;i++)
{
if((s1->e[i].row==s2->e[i].row) && (s1->e[i].col==s2->e[i].col))
  {s3->e[i].row=s1->e[i].row;s3->e[i].col=s1->e[i].col;s3->e[i].data=insrt(s1->e[i].data + s2->e[i].data,s3->e[i].data);}

else if((s1->e[i].row!=s2->e[i].row) && (s1->e[i].col!=s2->e[i].col))
  {s3->e[i].row=s2->e[i].row;s3->e[i].col=s2->e[i].col;s3->e[i].data=insrt(s2->e[i].data,s3->e[i].data);
   s3->e[i+c+2].row=s1->e[i].row;s3->e[i+c+2].col=s1->e[i].col;s3->e[i+c+2].data=insrt(s1->e[i].data,s3->e[i+c+2].data);}

else if((s1->e[i].row==s2->e[i].row) && (s1->e[i].col!=s2->e[i].col))
  {s3->e[i].row=s1->e[i].row;
    if(s1->e[i].col < s2->e[i].col)
      {s3->e[i].col=s1->e[i].col;s3->e[i].data=insrt(s1->e[i].data,s3->e[i].data);
       s3->e[i+c+2].col=s2->e[i].col;s3->e[i+c+2].data=insrt(s2->e[i].data,s3->e[i+c+2].data);}
    else
      {s3->e[i].col=s2->e[i].col;s3->e[i].data=insrt(s2->e[i].data,s3->e[i].data);
       s3->e[i+c+2].col=s1->e[i].col;s3->e[i+c+2].data=insrt(s1->e[i].data,s3->e[i+c+2].data);}
  }
else if((s1->e[i].row!=s2->e[i].row) && (s1->e[i].col==s2->e[i].col))
  {s3->e[i].col=s1->e[i].col;
    if(s1->e[i].row < s2->e[i].row)
      {s3->e[i].row=s1->e[i].row;s3->e[i].data=insrt(s1->e[i].data,s3->e[i].data);
       s3->e[i+c+2].row=s2->e[i].row;s3->e[i+c+2].data=insrt(s2->e[i].data,s3->e[i+c+2].data);}
    else
      {s3->e[i].row=s2->e[i].row;s3->e[i].data=insrt(s2->e[i].data,s3->e[i].data);
       s3->e[i+c+2].row=s1->e[i].row;s3->e[i+c+2].data=insrt(s1->e[i].data,s3->e[i+c+2].data);}
  }
}
s3->e[i+c+2].row=s3->e[i+c+2].col=s3->e[i+c+2].data=-1;
printf("\nResult\nValue\tRow\tColumn\n");
for(i=0;s3->e[i].data!=-1;i++)
{if(s3->e[i].data!=0)
 printf("%d\t%d\t%d\n",s3->e[i].data,s3->e[i].row,s3->e[i].col);
}
getch();
}





