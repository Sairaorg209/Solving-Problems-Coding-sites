#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   long long int n,t,i;
   //printf("testcase:");
   scanf("%lld",&t);
   while(t!=0){
   	
   	//printf("\nsize:");
   	scanf("%lld",&n);
   	
	long long int arr[n],diff=0;
   	
   	for(i=0;i<n;i++){
   		scanf("%lld",&arr[i]);
	   }
   	
	qsort(arr, n, sizeof(long long int), cmpfunc);
	
	for(i=0;i<n-1;i++){
		diff=abs(arr[i+1]-arr[i]);
		if(diff==0){
			printf("%lld\n",arr[i]);
			break;
		}
		else if(diff>1 && i==n-2){
			printf("%lld\n",arr[i+1]);
			break;
			}
	
		else if(diff>1 && i==0){
			printf("%lld\n",arr[i]);
			break;
		}	
		
			
	}
	
	t--;
   }

 

   return 0;
}
