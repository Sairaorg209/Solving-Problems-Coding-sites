	#include<stdio.h>
	long main()
    {
    	long t,i,N,M;
    	scanf("%ld",&t);
    	while(t){
    		scanf("%ld %ld",&N,&M);
    		if(N==M+1 || M==N+1 || N==M)
    			printf("1\n");
    		else if(N==1 || M==1)
				printf("-1\n");
			else
				printf("2\n");	
					
    		t--;
		}
		return 0;
	}	
	
