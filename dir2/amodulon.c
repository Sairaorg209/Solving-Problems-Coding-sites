#include<stdio.h>
long modulo(long a,long b,long n){
    long long x=1,y=a; 
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%n;
            printf("X=%d when b=%d\n",x,b);
        }
        y = (y*y)%n; // squaring the base
        printf("Y=%d when b=%d\n",y,b);
        b /= 2;
    }
    return x%n;
}
int main()	
{	long t,i,a,b,c;
	scanf("%ld",&t);
	for(i=1;i<=t;i++){
	scanf("%ld%ld%ld",&a,&b,&c);
	printf("%ld\n",modulo(a,b,c));
	}
}
