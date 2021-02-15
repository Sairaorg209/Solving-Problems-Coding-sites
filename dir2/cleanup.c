#include<stdio.h>

int main(){
	int n,m,in,i;
	scanf("%d %d",&m,&n);
	int a[n+1],chef[n-m];
	for(i=1;i<m;i++){
		scanf("%d",&in);
		a[in]=1;
	}
	int f=1,j=0,k=1;
	for(i=0;i<=n;i++){
		if(a[i]==0 && f==1)
			{chef[j]=i;
			f=0;j=j+2;
			}
		else if(a[i]==0 && f==0)	
			{chef[k++]=i;
			f=1;
			}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	for(i=0;i<j;i=i+2){
		printf("%d ",chef[i]);
	}
	printf("\n");
	for(i=1;i<k;i=i+2){
		printf("%d ",chef[i]);
	}
	
}
