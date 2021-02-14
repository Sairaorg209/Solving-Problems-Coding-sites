/*
Accepted in codechef
*/
#include<iostream>
using namespace std;

int main(){
	unsigned long long t,count;
	string s;
	cin>>t;
	while(t!=0){
		cin>>s;
		count=0;
		if(s.length()<2)
			cout<<"0"<<endl;
		else{
			int index=0;
			while(index<(s.length()-1)){
				if(s[index]!=s[index+1]){
					++count;
					index+=2;
				}
				else{
					++index;
				}
			}
			cout<<count<<endl;
		}
		--t;
	}
	

	return 0;
}
