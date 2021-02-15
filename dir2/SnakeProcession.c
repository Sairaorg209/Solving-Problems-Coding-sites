/*Passed testcases*/
#include<stdio.h>

isValid(char *str, int n){
	int i=0,hflag=0,deathFlag=0;
	while(i<n){
		
		switch(str[i]){
			case '.':
					break;
			
			case 'T':
					if(hflag==1)
						hflag=0;
					else
						deathFlag=1;
							
					break;
				
			case 'H':
					if(hflag==0)
						hflag=1;
					else
						deathFlag=1;
					
					break;							
		}
		i++;
		if(deathFlag==1)
			break;
	}
	//printf("%d  %d",hflag,deathFlag);
	if(deathFlag==0 && hflag==0)
		printf("Valid\n");
	else
		printf("Invalid\n");	
	
}

int main(){
	int t,n;
	scanf("%d",&t);
	while(t>0){
		scanf("%d",&n);
		char str[n];
		scanf("%s",&str);
		isValid(str,n);
		t--;
	}
	
}

