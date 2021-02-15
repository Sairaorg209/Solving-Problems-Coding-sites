#include<stdio.h>
/*HEAPSORT*/
int getparent(int i){
	return i/2;
}
int getleftchild(int i){
	return 2*i;
}
int getrightchild(int i){
	return 2*i+1;
}

void MAX_HEAPIFY(int *a,int i){
	int l,r,largest=i;
	l=getleftchild(i);
	r=getrightchild(i);
	if(l<=10 && a[l]>a[largest])
		largest=l;
	else if (r<=10 && a[r]>a[largest])
		largest=r;
	if(largest != i)
		{int exc=a[largest];
		a[largest]=a[i];
		a[i]=exc;
		MAX_HEAPIFY(a,getparent(largest));
		}		
}
int main(){
	int a[11],i;
	for(i=1;i<=10;i++)
		scanf("%d",&a[i]);
	for(i=5;i>=1;i--)
		MAX_HEAPIFY(a,i);
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);	
}
