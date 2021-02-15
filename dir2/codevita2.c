#include <stdio.h>
#include<math.h>
long chPrime(long n);
int main(){
    long N,i,fl=0,j,loop=0,sumfl=0,p1,p2,p3;
    scanf("%ld %ld",&N,&i);

    for(j=2;j<=N;j++){
        fl=chPrime(j);
        if(fl==0){
            loop=i;
            sumfl=0;
            p1=j;
            while(loop!=0){
                p2=2*p1+1;
                //printf("p1 is %ld and p2 is %ld\n",p1,p2);
                sumfl=sumfl+chPrime(p2);
                p1=p2;
                loop=loop-1;
            }
            if(sumfl==0)
                printf("%ld ",j);

        }

    }
    return 0;
}

long chPrime(long n)
{
    long i, flag = 0;
    if (n==2)
        flag=0;

    if (n!=2 && n%2==0)
        flag=1;

    for (i=3;i<=sqrt(n);i+=2){
        if (n%i==0)
            {flag=1;
            break;
            }
    }

    return flag;
}
