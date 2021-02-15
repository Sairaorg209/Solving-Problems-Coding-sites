#include<stdio.h>
#include<stdlib.h>
void findnum(int n)
{int i=0,j,a[1000],q,r;
n--;
while(q!=-1)
{r=n%3;
q=n/3;
if(r==0)
 a[i]=2;
else if(r==1)
 a[i]=3;
else 
 a[i]=4;
i++;
q--;
n=q;  
}
for(j=i-1;j>=0;j--)
printf("%d",a[j]);
printf("\n");
}
int main()
{long n[100000],t;int l;
scanf("%ld",&t);
for(l=0;l<t;l++)
{scanf("%ld",&n[l]);
}
for(l=0;l<t;l++)
{findnum(n[l]);
}
return 0;}

