    #include<stdio.h>
    long fact(long n)
    {
    if(n!=0){
    long c,fact=1;
    for (c=1;c<=n;c++)
    {
    fact=fact*c;
    }
    return fact;}
    else  
    return 1;
    }
     
    int main()
    {long t,i;
    scanf("%ld",&t);
    long n[t];
    for(i=0;i<t;i++){
    	scanf("%ld",&n[i]);
    	printf("%ld\n",fact(n[i]));
	}
    
     return 0;
     
	} 
