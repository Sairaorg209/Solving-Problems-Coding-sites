#include<iostream>
using namespace std;
int main(){
	long long tCase,scrtIng=0,dish=0,dishCount=0,concl=0;
	cin>>tCase;
	while(tCase!=0){
		cin>>dishCount>>scrtIng;
		concl=0;
		while(dishCount!=0){
			cin>>dish;
			if(dish>=scrtIng){
				
				concl=1;
			}
			--dishCount;
		}
		if(concl==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	
		--tCase;
	}
	return 0;
}
