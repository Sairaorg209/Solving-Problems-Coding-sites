#include<stdio.h>

int main(){
	long a,b,n,count=0,steps=0;int flag=0;
	scanf("%ld%ld%ld",&a,&b,&n);
	while(flag==0){
		count++;
		steps=steps+a;
		if(steps>=n)
			flag=1;
		else 
			steps=steps-b;	
			
	}
	printf("%ld\n",count);
}
