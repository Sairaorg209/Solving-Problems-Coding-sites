#include<stdio.h>
int main(){
	long t,i,v,curr,prev,sum,j;
	scanf("%ld",&t);
	long size[t];
	for(i=0;i<t;i++){
		scanf("%ld",&size[i]);
		sum=0;
			for(j=0;j<size[i];j++){
				scanf("%ld",&v);
				if(j==0){
					curr=v;
					prev=v;
					sum=curr;}
				else{
					curr=v;
					if(curr>prev)
						sum=sum+(curr-prev);
					prev=v;	
				}	
					
			}
		printf("%ld\n",sum);	
	}
	
	
}
