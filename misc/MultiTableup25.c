#include<stdio.h>

int main(){
	
	int num=25;
	int i,j;
	
	for(i=1;i<=num;i++){
		printf("%d\t",i);
		for(j=1;j<=num;j++){
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	return 0;
}
