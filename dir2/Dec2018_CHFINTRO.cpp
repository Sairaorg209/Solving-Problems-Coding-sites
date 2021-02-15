#include<iostream>
using namespace std;

int main(){
	long long int T,N,R;
	cin>>T;
	cin>>N;
	while(T!=0){
		cin>>R;
		if(R>=N)
			cout<<"Good boi"<<endl;
		else
			cout<<"Bad boi"<<endl;	
		--T;
	}
	return 0;
}
