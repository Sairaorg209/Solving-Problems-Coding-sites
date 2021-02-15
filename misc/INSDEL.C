/*INSERTION AND DELETION OPERATION ON ARRAY USING FUNCTIONS AND POINTERS*/
#include<stdio.h>
#include<conio.h>
void display(int *);
void insert(int *,int,int);
void delete(int *,int);

void main(){
int a[5]={0,0,0,0,0},j,v,p,po,i;
clrscr();
for(i=0;i<5;i++)
{
printf("Enter element value and array position(<5)\n");
scanf("%d%d",&v,&p);
insert(a,v,p);
}
do
{
printf("To insert an element, press 1\nTo delete an element, press 2\nElse enter 3\n");
scanf("%d",&j);
if(j==1)
{
printf("Enter element value and array position\n");
scanf("%d%d",&v,&p);
insert(a,v,p);
}

else if(j==2)
{
printf("Enter array position\n");
scanf("%d",&po);
delete(a,po);
}
else if(j==3)
{
printf("Thank you and good bye\n");
exit();}
}while(1);

}

void display(int *array3)
{int i;
printf("Array thus formed\n");
for(i=0;i<5;i++)
 printf("%d\t",array3[i]);
printf("\n");
}

void insert(int *array1,int elmnt,int pos)
{
if(array1[pos-1]==0)
  array1[pos-1]=elmnt;
else
  printf("No vacancy");

display(array1);
}

void delete(int *array2,int posdel)
{
if(array2[posdel-1]!=0)
  array2[posdel-1]=0;
else
  printf("No position to delete");
display(array2);
}


