#include<stdio.h>

int main()
{
long i=0,j=0,n,m,c,k=0;

printf("Enter the start and end range of prime numbers\n");
scanf("%ld%ld",&m,&n);
i=m;
while(i<n)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
 c++;
}
if(c==2)
{
printf("%ld ",i);
k++;
}
i++;
}
return 0;
}
