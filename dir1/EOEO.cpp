/*
accepted in codechef
*/

#include<iostream>
using namespace std;

unsigned long long countVictory(unsigned long long ts, unsigned long long count){
	
	if(ts==1 || ts==2){
		return 0;
	}
	
	else if(ts%2!=0){
		count = ts/2;
		return count;
	}
	else
		return countVictory(ts/2,035);
}

int main(){
	unsigned long long ts;
	int t;
	cin>>t;
	while(t!=0){
		cin>>ts;
		cout<<countVictory(ts,0)<<endl;
		--t;
	}
	return 0;
}
