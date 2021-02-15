#include<stdio.h>
int main(){
	int T,i,j,sum;
	scanf("%d",&T);
	int X[T],Y[T];
	for(i=0;i<T;i++){
		scanf("%d%d",&X[i],&Y[i]);
		sum=0;
		int a[X[i]];
		for(j=0;j<X[i];j++){
			scanf("%d",&a[j]);
			if(a[j]<=0)
				sum=sum+1;
		}

		if(sum<Y[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
}
