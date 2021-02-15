#include<stdio.h>
#include<conio.h>
int gcd(int,int);
long power(int,int);
long fibo(int);


void main()
{int m,n,g,k,l;long po,f;
int j;clrscr();
do{
printf("\nPress 1 for GCD\nPress 2 for power\nPress 3 to find nth fibonacci\nPress 4 to exit\n");
scanf("%d",&j);

if(j==1)
{
printf("Enter any two numbers\n");
scanf("%d%d",&m,&n);
g=gcd(m,n);
printf("GCD=%d",g);
}
else if(j==2)
{
printf("Enter unsigned base and exponent\n");
scanf("%d%d",&k,&l);
po=power(k,l);
printf("Result=%ld",po);
}
else if(j==3)
{
printf("Enter position\n");
scanf("%d",&n);
f=fibo(n);
printf("The %d th fibonacci number is %ld",n,f);
}

else if(j==4)
{
printf("Thank you\n");
break;
}}while(1);

}

int gcd(int x,int y)
{if(y>x)
   return gcd(y,x);
 else if(x%y==0)
   return y;
   else
   return gcd(y,x%y);
}

long power(int a,int b)
{
if(b==0)
 return 1;
else
 return a*power(a,(b-1));
}

long fibo(int n)
{
if(n==0)
 return n;
else if(n==1)
 return n;
else
 return (fibo(n-1)+fibo(n-2));
}
 