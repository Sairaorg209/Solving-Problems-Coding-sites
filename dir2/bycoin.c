#include<stdio.h>
long long chByt130(long long n){
	long long fi,se,th;
	fi=n/2;
	se=n/3;
	th=n/4;/*
	if(chByt130(fi)>fi)
		fi=chByt130(fi);
	else if(chByt130(se)>se)
		se=chByt130(se);
	else if(chByt130(th)>th)
		th=chByt130(th);		*/
		if(chByt130(fi)+chByt130(se)+chByt130(th)>n)
			return chByt130(fi)+chByt130(se)+chByt130(th);
		else	
			return n;			
}
int main(){
	long long n,sum,m;
		while(scanf("%lld",&n)!=EOF){
		sum=chByt130(n);
		printf("%lld\n",sum);
		}
	}
