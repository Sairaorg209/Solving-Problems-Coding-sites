#include <iostream>
using namespace std;

long long power(long long x, unsigned long long y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 

int main() {
    long long t,ms,bit,nibble,byte,r,q;
    cin>>t;
    while(t!=0){
    	r=0;
    	q=0;
    	cin>>ms;
    	if(ms!=0){
			r=ms%29;
    		q=ms/29;
    		if(r>=0 && r<3)	
    			cout<<power(2,q)<<" 0 "<<"0"<<endl;
    		else if(r>=3 && r<12)
				cout<<"0 "<<power(2,q)<<" 0"<<endl;
			else if(r>=12 && r<29)
				cout<<"0 "<<" 0 "<<power(2,q)<<endl;		
    	
		}

    	--t;
	}
    
    return 0;
}

