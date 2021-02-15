#include <stdio.h>
int checkSemiPrime(int n);
int main()
{
    int t,n, i, flag;
    scanf("%d", &t);
    while(t!=0){
    
	flag=0;
	scanf("%d",&n);    
	for(i = 2; i <= n/2; ++i)
    {
        // condition for i to be a prime number
        if (checkSemiPrime(i) == 1)
        {
            // condition for n-i to be a prime number
            if (checkSemiPrime(n-i) == 1)
            {	
                // n = primeNumber1 + primeNumber2
                //printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }

        }
    }

    if (flag == 0)
        printf("NO\n");
    else
		printf("YES\n");    
	
	--t;
	}
    
    return 0;
}

// Function to check Semi-prime number
int checkSemiPrime(int num)
{ 
    int f=0,cnt = 0;
	 
  
    for (int i = 2; cnt < 2 && i * i < num ; ++i) 
        
		while (num % i == 0)
           num /= i, ++cnt;
			 	 
		

    if (num > 1) 
        ++cnt; 
  
    // Return '1' if count is equal to '2' else 
    // return '0' 
    return cnt == 2; 	 
} 
