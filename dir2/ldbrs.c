#include<stdio.h>
#include<stdlib.h>
int trackpos[2000]={0};
int dp=0;
int n;
int myarr[2000]={0};
int scores[2000]={0};
int currentpos[2000]={0}; 

typedef struct {
	int val;
	int pos;
}entity;

entity e[2000];
void getSum(int* arr){
	int sum=0;
	int j;
	for(j=0;j<dp;j++){
		printf("arr[j]=%d and j=%d\n",e[j].val,e[j].pos);
		sum=sum+e[j].val*e[j].pos;
	}
	printf("Sum is:%d\n",sum);
}
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
void mysort(int size,int* arr){
	int in;int sum=0;
	qsort(arr, size, sizeof(int), cmpfunc);
	for(in=0;in<dp;in++){
		printf("%d\t",arr[in]);
		
	}

	printf("\n");

}
void getpos(int sc,int pos){
	int in,sc1;
	e[pos].pos=pos;
	trackpos[pos]+=sc;
	scores[pos]+=sc;
	sc1=trackpos[pos];
	e[pos].val=sc1;
	dp=n;
	for(in=0;in<dp;in++){
		myarr[in]=trackpos[in];
		printf("%d\t",myarr[in]);
	}
	printf("\n");
	mysort(dp,myarr);
	for(in=0;in<dp;in++){
			if(myarr[in]==sc1){
				printf("sending position:%d\n",in+1);
				e[pos].pos=in+1;
				printf("New currentpos[j]=%d\n",currentpos[pos]);
				getSum(myarr);
		}
	}
}
int main(){
	int q,i,pos,sc;
	scanf("%d%d",&n,&q);
	int sum=0;
	for(i=0;i<q;i++){
		scanf("%d%d",&pos,&sc);
//		printf("Value of sum=%d\n",sum);
		getpos(sc,pos-1);
		/*printf("sum=%d\n",sum);*/
	}
}
