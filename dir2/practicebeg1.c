#include<stdio.h>

void primecheck(long n)
{int i;int c=0;
for(i=3;i<=n;i++)
{if( (n%i)==0 )
c++;

}
if (c==1 || n==1 || n==2)
printf("LUCKY NUMBER\n");
else
printf("Sorry\n");
}
int main()
{long t;int k;
scanf("%ld",&t);
long n[t];
for(k=0;k<t;k++)
scanf("%ld",&n[k]);
for(k=0;k<t;k++)
primecheck(n[k]);
}
