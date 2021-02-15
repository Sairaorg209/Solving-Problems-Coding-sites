#include<stdio.h>
#include<math.h>
void daytypecheck(int year)
{int diff,lpyr,days,daytype,lpdiff;
year=year-1;
diff=year-2001;
if (diff<0)
diff=diff*(-1);

if(diff<100)
{
lpyr=diff/4;
days=lpyr*366+(diff-lpyr)*365+365+2;
daytype=days%7;
}
else
{lpdiff=(year-2000)/400;
if (lpdiff<0)
 lpdiff=lpdiff*(-1);
lpyr=diff/4-(diff/100)+1+lpdiff;
days=lpyr*366+(diff-lpdiff)*365+365+1;
daytype=days%7;
}
if(daytype==0)
printf("sunday\n");
else if(daytype==1)
printf("monday\n");
else if(daytype==2)
printf("tuesday\n");
else if(daytype==3)
printf("wednesday\n");
else if(daytype==4)
printf("thursday\n");
else if(daytype==5)
printf("friday\n");
else
printf("saturday\n");
}
int main()
{long t;
scanf("%ld",&t);
int n[t],k;
for(k=0;k<t;k++)
scanf("%d",&n[k]);
for(k=0;k<t;k++)
daytypecheck(n[k]);
}
