#include<stdio.h>
long long int N;
long long int giveRes(long long int *a, long long int *b){
	long long int k,l;
	a[0]=0;
	long long int ava=0,count=0;
	for(k=0;k<N;k++){
		ava=a[k+1]-a[k];
		if(b[k]<=ava){
			//printf("Success when k is %lld\n",k);
			count++;
		}
	}	
	return count;	
}
int main(){
	int t;
	scanf("%d",&t);
	long long int i,j;
	for(i=0;i<t;i++){
		scanf("%lld",&N);
		long long int a[N+1],b[N];
		for(j=1;j<N+1;j++){
			scanf("%lld",&a[j]);
		}
		for(j=0;j<N;j++){
			scanf("%lld",&b[j]);
		}
		printf("%lld\n",giveRes(a,b));
	}
}
