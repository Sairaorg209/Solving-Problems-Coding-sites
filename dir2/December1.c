#include<stdio.h>

unsigned long long minby130(unsigned long long n1,unsigned long long n2,unsigned long long m){
	if(n1<n2){
		if(m<n1)
			return m;
		else
		    return n1;
	}
	else{
		if(m<n2)
			return m;
		else
		    return n2;
	}
}

unsigned long long resStone(unsigned long long n1,unsigned long long n2,unsigned long long m){
	
	unsigned long long minprev,j;
	
	j=minby130(n1,n2,m);
	
		while(j>0){
				n1=n1-j;
				n2=n2-j;
				minprev=j;
				j=minby130(n1,n2,minprev);
				if(j==minprev)
					j--;
				}
	return n1+n2;		
}

int main(){
	long int T,i;
	
	scanf("%li",&T);
	
	unsigned long long n1[T],n2[T],m[T];
	
	for(i=0;i<T;i++){
	
		scanf("%llu%llu%llu",&n1[i],&n2[i],&m[i]);
		
		printf("%llu\n",resStone(n1[i],n2[i],m[i]));
			
	}
return 0;	
}
