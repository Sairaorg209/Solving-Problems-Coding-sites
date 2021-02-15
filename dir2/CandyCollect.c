#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n,t,i,sum,sum1,temp,flags=-1,prevsum=0;
	
   scanf("%d",&t);
   
   while(t){
   	scanf("%d",&n);
   	int a[n];
   	for(i=0;i<n;i++){
   		scanf("%d",&a[i]);
	   }
	qsort(a, n, sizeof(int), cmpfunc);
	sum=a[0];
	i=1;
	sum1=0;
	temp=a[i];
	while(i!=n){
		if(temp==0)
			temp=a[i];
			
		sum=sum+a[i];
			
		temp=temp+a[i+1];
		
		printf ("Sum is %d and temp is %d and sum1 is %d\n",sum,temp,sum1);
		
		if(sum<temp){
			sum1=sum1+sum;
			temp=a[i+1];
			flags=1;
			}
		else{
			sum1=sum1+temp;
			sum=prevsum;
			i++;
			flags=0;
		}
		
		
		if(i==n-1 && flags==1){
			sum1=sum1+temp;
			
		}
		else if(i==n-1 && flags==0){
			printf("Success!\n Here Sum is %d and temp is %d\n",sum,temp);
			sum1=sum1+sum+temp;
		}
		prevsum=sum;
		i++;	
	   }
	printf("%d\n",sum1);   
   	t--;
   }
  

   return(0);
}
