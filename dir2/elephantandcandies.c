/*Elephants and candies*/
#include<stdio.h>
int main()
{	int T,S;long C;
	scanf("%d",&T);
	while(T--){
		scanf("%d%ld",&S,&C);
		int a[10001]={0};
		while(S--){
		scanf("%d",&a[S]);
		C=C-a[S];
		}	
		if(C<0)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;	
}

