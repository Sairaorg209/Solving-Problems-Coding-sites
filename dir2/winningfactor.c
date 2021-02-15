#include<stdio.h>
long isPrime(long n){
	long i,flag=0;
	for(i=2;i<n/2;i++){
	if(n%i==0)
			flag=1;	
	}
	if (flag==0)
		return 0;
	else
		return 1;		
}

int main(){
	long t,in,i,sum;
	scanf("%ld",&t);
	long n[t];
	for(in=0;in<t;in++){
		scanf("%ld",&n[in]);
		if(isPrime(n[in])==0)
			printf("%d\n",1+n[in]);
		else{sum=0;
			for(i=1;i<=n[in];i++){
				if(n[in]%i==0)
					sum=sum+i;
			}
			printf("%d\n",sum);
		}	
	}
}
