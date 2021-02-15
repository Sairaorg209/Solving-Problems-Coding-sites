#include<stdio.h>
int main()
{int t,i;
long a[10],b[10],c[10],f[10],x1[10],x;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d%ld%ld",&a[i],&b[i],&c[i]);
printf("\n");}
for(i=0;i<t;i++)
{
for(x=0;x<=1000;x++)
{
f[i]=(a[i]*x*x)+(b[i]*x)+c[i];
if(f[i]>0)
break;
}
x1[i]=x;
}
for(i=0;i<t;i++)
printf("%ld",x1[i]);

return 0;
} 
