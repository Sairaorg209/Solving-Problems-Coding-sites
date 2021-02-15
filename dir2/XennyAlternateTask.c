#include<stdio.h>
int main(){
	
	long long int t,n;
	//printf("Testcases:");
	scanf("%lld",&t);
	
	while(t!=0){
	
	//printf("Enter size:\n");
	
	scanf("%lld",&n);
	
	long long int a[n],b[n],i,sumAeven=0,sumAodd=0,sumBeven=0,sumBodd=0;
	
	//printf("Enter A's tasks:");
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(i%2==0)
			sumAeven+=a[i];
		else
			sumAodd+=a[i];	
	}
	
	sumBeven=sumAodd;
	sumBodd=sumAeven;
	
	//printf("Enter B's tasks:");
	for(i=0;i<n;i++){
		scanf("%lld",&b[i]);
		
		if(i%2==0)
			sumBeven+=b[i];
		else
			sumBodd+=b[i];
	
	}
	
/*	printf("All tasks are:\n");
	for(i=0;i<n;i++){
		printf("Task %d for A is %d and Task %d for B is %d\n",i+1,a[i],i+1,b[i]);
	}
*/	
/*	printf("%d\n",sumBeven);
	printf("%d\n",sumBodd);
*/	
	printf("%lld\n",(sumBeven>sumBodd)?sumBodd:sumBeven);
	
	
	t--;
	}
	return 0;
}
