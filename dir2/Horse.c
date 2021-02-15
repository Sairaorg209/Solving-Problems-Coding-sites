#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b);
int main()
{
   int t,n,i,min,dif;
   scanf("%d",&t);
   while(t){
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    qsort(num, n, sizeof(int), cmpfunc);
    min=abs(num[1]-num[0]);
    for(i=1;i<n-1;i++){
        dif=abs(num[i+1]-num[i]);
        if(dif<min)
            min=dif;
    }
    printf("%d\n",min);

    t--;
   }


   return 0;
}


int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
