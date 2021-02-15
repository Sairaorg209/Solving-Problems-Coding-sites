#include<stdio.h>
#include<math.h>
int main()
{
	long i,n[100000],t,sum,j,count=1,temp,k,temp1;
	double a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{sum=temp=3;
	count=1;
	a=1;
	j=0;
//	printf("%lf %lf\n",pow(2,4),pow(2,0));
	// temp=3 sum=3 count=1 j=0...temp=5 sum=8 a=1 count=2 j=1...sum=8+5+1=14 count=3...temp=9 sum=23 a=2 count=4 j=2...sum=23+9+1=33 count=5
	while(count!=n[i])
	{
	//	printf("%d",a);
	//	printf("%d",power(2,a));
	temp+=pow(2,a);
	//printf("a %lf\n",pow(2,a));
	sum+=temp;
	++a;
	++count;
	if(count==n[i])
	break;
	++j;
	//	printf("%d",sum);
	temp1=temp;
	for(b=0;b<j;b++)
	{
	//	printf("%d",pow(2,1));
	sum+=temp1+pow(2,b);
	//	printf("b %lf\n",pow(2,b));
	//	printf("%d",sum);
	   temp1+=pow(2,b);
	++count;
	if(count==n[i])
	goto end;
	}
	}	
	end:
	printf("%ld",sum%1000000007);
	}
	return 0;
}
