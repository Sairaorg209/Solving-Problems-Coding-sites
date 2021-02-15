#include <stdio.h>

int main(){
	int t,n,m,i,buff;
	
	scanf("%d",&t);
	
	while(t>0){
		scanf("%d %d",&n,&m);
		int a[2*m];
		for(i=0;i<m;i++){
			scanf("%d %d",&a[i*m],&a[i*m+1]);
		}
		buff=n-(2*m);
		if(buff==0 || buff%2==0)
			printf("yes\n");
		else
			printf("no\n");	
		
		t--;
	}
	
	return 0;
}
