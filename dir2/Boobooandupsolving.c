#include<stdio.h>
long maxVal=0;
long avgVal=0;
long M,N;
calAvg(long v){
	avgVal=avgVal+v;
}

calMax(long val){
	if(val>maxVal)
		maxVal=val;
	calAvg(val);	
}

int main(){
	scanf("%ld%ld",&N,&M);
	long a[N];
	long i,rem;
	for(i=0;i<N;i++)
	{scanf("%ld",&a[i]);
	calMax(a[i]);
	}
	rem=avgVal%M;
	/*printf("Average: %ld\n",avgVal/M);
	printf("Max: %ld\n",maxVal);*/
	if(maxVal>avgVal/M)
		printf("%ld\n",maxVal);
	else if(maxVal<=avgVal/M && rem>0)
		printf("%ld\n",maxVal+1);
	else	
		printf("%ld\n",avgVal/M);
}
