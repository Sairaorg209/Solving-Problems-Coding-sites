#include<stdio.h>

int main()
{	long long int n,k,t,sum=0;
	scanf("%lld%lld",&n,&k);
	while(n!=0){
		scanf("%lld",&t);
		if(t%k==0)
			sum++;
			
		n--;	
	}	
	printf("%lld",sum);
	return 0;
}
