#include<stdio.h>
void checkD(long n){
	long q,r;
	if(n%4==0){
		if((n/4)%2==0)
			printf("No\n");
		else
			printf("Yes\n");	
	}
	else{
	q=n/4;//printf("%d",q);
	r=n%4;//printf("%d",r);	
	if(q%2==0){
		if(r%2!=0)
			printf("Yes\n");
		else if(r%2==0){
			printf("No\n");
		}	
	}
	else if(q%2!=0){
		if(r%2!=0)
			printf("No\n");
		else if(r%2==0)
			printf("Yes\n");	
	}
	}
}
int main(){
	long t;int i;
	scanf("%ld",&t);
	long n[t];
	for(i=0;i<t;i++){
		scanf("%ld",&n[i]);
		checkD(n[i]);
	}
}
