/*Passed testcases*/
#include<stdio.h>

int main(){
	int i,t,n,deathFlag,endflag,diff,buff;
	scanf("%d",&t);
	while(t>0){
		deathFlag=0;
		diff=0;
		buff=0;
		endflag=0;		
		scanf("%d",&n);
		if(n%2!=0){
			int a[n];
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
				
				if(i==0 && a[i]!=1){
					//printf("Case 1\n");
					deathFlag=1;
					
				}
				
				else if(i==(n-1) && a[i]!=1){
					//printf("Case 2\n");
					deathFlag=1;
					
				}
				
				else {
					//printf("Case 3\n");
					if(i==0)
						buff=0;
					else{
						buff=a[i]-a[i-1];
						
						if(buff!=+1 && buff!=-1)
							deathFlag=1;
					}
							
					
					diff+=buff;
					
					
					
				//	printf("Value of diff is %d\n", diff);
				}
				
			}
			
			
			
		}
		else{
			int a1[n];
			for(i=0;i<n;i++)
				scanf("%d",&a1[i]);
			
			printf("no\n");
			endflag=1;
		}
		if(endflag==0){
			if(diff==0 && deathFlag==0)
					printf("yes\n");
				else
					printf("no\n");	
		}
		t--;
	}
	return 0;
}
