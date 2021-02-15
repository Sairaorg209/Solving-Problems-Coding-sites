#include<stdio.h>

int main(){
	
 long t,i;
 scanf ("%ld",&t);
 long a[t+1];
 for(i=1;i<=t;i++)
 scanf("%ld",&a[i]);
 
 for(i=1;i<=t;i++)
 	if(a[i]%2==0)
 		printf("ALICE\n");
 	else
	 	printf("BOB\n");	
 return 0;

}

