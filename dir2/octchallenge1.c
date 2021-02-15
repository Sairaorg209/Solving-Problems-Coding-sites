#include<stdio.h>

int main()
{	long t;long N[6];
    int i=0,j=0,m=0;long a[6][5001];
	long rslt[6],sum=0,sum1=0,sum2=0;
	scanf("%ld",&t);
	
	for(i=1;i<=t;i++)
	{
	 scanf("%ld",&N[i]);
	  for(j=1;j<=N[i];j++)
	    scanf("%ld",&a[i][j]);
	}
	

	for(i=1;i<=t;i++){
	sum=N[i];m=1;sum1=0;
	if(sum!=1){
	for(j=2;j<=N[i];j++)
		{
		if(a[i][j]>=a[i][j-1])
			{sum1=sum1+m;m++;}
		else
			{m=1;}
		}
		rslt[i]=sum+sum1;;
		}
	else
		rslt[i]=1;	
    }
	printf("\n");
	for(i=1;i<=t;i++)
	 printf("%ld\n",rslt[i]);
	return 0;
}
