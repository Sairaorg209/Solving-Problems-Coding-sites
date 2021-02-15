#include<stdio.h>
#include<string.h>

long max(long a,long b,long c){
	if(a>=b && a>=c)
		return a;
	else if(b>=a && b>=c)
		return b;
	else if(c>=a && c>=b)
		return c;	
}
int main(){
	long i,i1,r=0,b=0,g=0,t,count;
	scanf("%ld",&t);
	int n[t];
	for(i1=0;i1<t;i1++){
		scanf("%ld",&n[i1]);
			char ch[n[i1]];
			scanf("%s",&ch);
				
			count=0;g=0;b=0;r=0;
			
			for(i=0;i<n[i1];i++){
				if(ch[i]=='R')
					r++;
				else if(ch[i]=='B')
					b++;
				else
					g++;		
			}
			
			if(b==n[i1] || g==n[i1] || r==n[i1])
				count=0;
			else if(max(r,g,b)<n[i1])
				count=n[i1]-max(r,g,b);	
			printf("%ld",count);
			//printf("\nR=%d,B=%d,G=%d and count=%d",r,b,g,count);
	
	}
}
	
