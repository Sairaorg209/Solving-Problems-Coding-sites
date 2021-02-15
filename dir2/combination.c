#include<stdio.h>
//Initialise array elements with zero
unsigned long long nCr(unsigned long long n, unsigned long long r,unsigned long long *dp)
{
       if(n==r) return dp[1*n+r] = 1; //Base Case
       if(r==0) return dp[1*n+r] = 1; //Base Case
       if(r==1) return dp[1*n+r] = n;
       if(dp[1*n+r]) return dp[1*n+r]; // Using Subproblem Result
       return dp[1*n+r] = nCr(n-1,r,dp) + nCr(n-1,r-1,dp);
}

int main(){
	unsigned long long n,r,i,sum=0;
	unsigned long long* dp = calloc(10000*10000, sizeof(unsigned long long));
	//printf("Enter n and k \n");
	
	scanf("%llu %llu",&n,&r);
	for(i=0;i<=r;i=i+2){
		sum=sum+nCr(n,i,dp);
	}
	printf("%llu",sum);
	return 0;
}
