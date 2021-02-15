#include<stdio.h>

int main(){
	long long int t,n,i,k,duesum;
	scanf("%lld",&t);
	while(t!=0){
		
		scanf("%lld",&n);
		k=0;
		duesum=n*1000;
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			if(a[i]==0 && k==0){
				duesum+=100*(n-i);
				k++;
			}
			else if(a[i]==1){
				duesum-=1000;
			}
			else if(a[i]==0 && k!=0){
				;
			}
			
		}
		
		printf("%lld\n",duesum);
		t--;
	}
}
