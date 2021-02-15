#include<stdio.h>
#include<stdlib.h>
int tulona(const void *a,const void *b){
	return (*(long long int*)a - *(long long int*)b);
}
int main(){
	long long int t,n,k,i,count;
	scanf("%lld",&t);
	while(t!=0){
		scanf("%lld%lld",&n,&k);
		long long int a[n];
		count=0;
		for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		}
		qsort(a,n,sizeof(long long int),tulona);
		//printf("%lld\n%lld\n",n,k);
		n--;
		//printf("%lld\n",a[n-k+1]);
		for(i=n;i>=0;i--){
			if(a[i]>=a[n-k+1])
				count++;	
		//printf("%lld ",a[i]);
		}
		printf("%lld\n",count);
		--t;
	}
	return 0;
	
}
