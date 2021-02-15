#include <iostream>
using namespace std;

int main() {
    long long t,score1,score2,interval,remainder;
    cin>>t;
    while(t!=0){
    	remainder=0;
    	cin>>score1>>score2>>interval;
    	remainder=(score1+score2)%(2*interval);
    	if(remainder<interval)
    		cout<<"CHEF"<<endl;
    	else
    		cout<<"COOK"<<endl;
    	--t;
	}
    
    return 0;
}

