#include<stdio.h>

int main()
{
	long t,sum=1,rem=0;
	scanf("%ld",&t);
	int i;long num[t],s[t];
	for(i=0;i<t;i++)
	scanf("%ld",&num[i]);
	
	for(i=0;i<t;i++){
	sum=num[i];
	while(sum!=0)
	{
	rem=sum%10;
	sum=(sum-rem)/10;
	}
	s[i]=rem+num[i]%10;
	}
for(i=0;i<t;i++)
printf("%ld\n",s[i]);
}
