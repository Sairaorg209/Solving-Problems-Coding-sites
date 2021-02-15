#include<stdio.h>
typedef struct{
	long val;
	int ch;
}num;
int main(){
	int n,i,j;long sample;
	scanf("%d",&n);
	num mynum[n];
	for(i=0;i<n;i++){
		scanf("%ld",&mynum[i].val);
		mynum[i].ch=0;
	}
	for(j=0;j<n;j++){
		sample=mynum[j].val;
	for(i=0;i<n;i++){
		if(i!=j){
		if(sample%mynum[i].val==0)
			mynum[j].ch=1;
		}	
	}	
	if(mynum[j].ch!=1)
		printf("%ld ",mynum[j].val);
	}
	
}
