#include<iostream>
using namespace std;

int main(){
	int tCase;
	long i,rem,quo,rev;
	cin>>tCase;
	while(tCase!=0){
		cin>>i;
		rev=0;
		while(i!=0){
			rem=i%10;
			quo=i/10;
			rev=rev*10 + rem;
			i=quo;
			
		}
		cout<<rev;
		--tCase;
	}
	
	
	return 0;
}
