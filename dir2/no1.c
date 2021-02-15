	#include<stdio.h>
	long chBin1(long n);
	long main()
	{	long N,sum=0,t,i=2,freq=0,back=0,backf;
		scanf("%ld",&t);
		while(t){
		scanf("%ld",&N);
		if(back==0){
		i=2;
		sum=0;
		freq=0;
		}
		else if(back<N){
			i=back+1;
			freq=backf;
		}
		else if(N<back){
			i=2;
			sum=0;
			freq=0;
		}
		
		while(freq!=N){
			if(chBin1(i)==2){
				//printf("%ld is selected\n",i);
				sum=sum+i;
				freq++;
			}
				
		i++;
		}
		printf("%ld\n",sum%1000000007);
		t--;
		back=i;
		backf=freq;
		}
		return 0;	
	
	}
	 long chBin1(long x)
	{
	    long count = 0;
	    long b=x;
		long flag=0;
	    x = (x & (0x55555555)) + ((x >> 1) & (0x55555555));
	    x = (x & (0x33333333)) + ((x >> 2) & (0x33333333));
	    x = (x & (0x0f0f0f0f)) + ((x >> 4) & (0x0f0f0f0f));
	    x = (x & (0x00ff00ff)) + ((x >> 8) & (0x00ff00ff));
	    x = (x & (0x0000ffff)) + ((x >> 16) & (0x0000ffff));
		
		count=x;
		
	    if(count==2){
	    	flag=2;
	    	//printf("Count is %ld for %ld\n",count,b);
		}
	    
	    //else 
		//	printf("Count is %ld for %ld\n",count,b);
			
	    return flag;
	}

