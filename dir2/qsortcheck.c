#include<stdio.h>
#include<stdlib.h>
int arr[100]={0};
int dp=0;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
void mysort(int val,int size,int* arr,int pos){
	arr[pos]=arr[pos]+val;int in;
	qsort(arr, size, sizeof(int), cmpfunc);
	for(in=0;in<10;in++){
		printf("%d\t",arr[in]);
}
}
int main(){
	int n,i,pos;
	for(i=0;i<10;i++){
		scanf("%d%d",&n,&pos);
		mysort(n,10,arr,pos-1);
	}	
}
