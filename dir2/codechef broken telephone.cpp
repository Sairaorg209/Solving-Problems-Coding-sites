#include<stdio.h>
int read(int *p,int n)
{int a,b,c,l=n,s=0;
while(l>1){
a=*(p);printf("a=%d\n",a);
b=*(p+1);printf("b=%d\n",b);
if(b!=a)
{s=s+2;
p=p+1;
}
else
 p=p+1; 
l--;
}
return s;
}
int main()
{
	int T;
	scanf("%d",&T);
	int i=0,j=0;int n[T];int a[109];int x[T];
	while(i<T)
	{scanf("%d",&n[i]);
	int k=n[i];
	while(j<k)
	{scanf("%d",&a[j]);
	j++;
	}
	x[i]=read(&a[i],n[i]);
	
	i++;}
	i=0;
	while(i<T){
	printf("%d\n",x[i]);
    i++;}
return 0;	
}

