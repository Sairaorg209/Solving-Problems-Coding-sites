#include<stdio.h>
#include<math.h>
long long int check (long long int n){
	long long int sum=0;
	long long int i;
	for(i=1;pow(5,i)<=n;i++){
		sum=sum+(n/pow(5,i));
	}	
	return sum;
}
int main(){
	long long int n,i;
	scanf("%lld",&i);
	while(i!=0){
	
	scanf("%lld",&n);
	printf("%lld\n",check(n));
	
	i--;
	}
	return 0;
}
