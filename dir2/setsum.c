#include<stdio.h>
#include<math.h>
void calsumset(long n){
	unsigned long long sum=0;
	int i;
	for(i=1;i<=n;i++){
		sum=sum+i*pow(2,n-1);
	}
	printf("%llu",sum);
}
int main(){int t,i;
	scanf("%d",&t);
	long n[t];
	for(i=0;i<t;i++){
		scanf("%ld",&n[i]);
		calsumset(n[i]);
	}
}
