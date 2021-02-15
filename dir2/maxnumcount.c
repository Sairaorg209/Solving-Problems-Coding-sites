/*Count minimum and maximum*/
#include<stdio.h>
int main(){
	int T,i,j,size,n;
	int max,maxnum;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&size);
		int arr[10001]={ 0 };
		for(j=0;j<size;j++)
			{scanf("%d",&n);
			arr[n]++;
			}
		max=0;
		for(j=0;j<10001;j++)	
			{
				if(arr[j]>max)
					{
						max=arr[j];
						maxnum=j;
					}
			}
		printf("%d %d\n",maxnum,max);
		}
	return 0;
	}
