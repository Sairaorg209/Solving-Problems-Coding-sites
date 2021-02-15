#include<stdio.h>
int main(){
	int A,B;
	scanf("%d%d",&A,&B);
	int res = A-B;
	if(res%10==9)
		res--;
	else
		res++;
		
	printf("%d",res);
	return 0;
}
