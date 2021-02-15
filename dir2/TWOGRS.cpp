#include<iostream>
using namespace std;
int main(){
	int t,nA,nB,nC;
	cin>>t;
	while(t!=0){
		cin>>nA>>nB>>nC;
		
		if((nA+2*nB+3*nC)%2==0 && nA!=0 && nB!=0 && nC!=0){
			cout<<"YES"<<endl;
		}
		
		else if(nA==0 && nB==0){
			if(nC%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
		
		else if(nA==0 && nC==0){
			if(nB%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
		
		else if(nC==0 && nB==0){
			if(nA%2==0)
				cout<<"YES"<<endl;	
			else
				cout<<"NO"<<endl;	
		}	
			
		else if(nA==0){
			if((nB+nC)%5==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
		
		else if(nB==0){
			if(nA==nC*3)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
		else if(nC==0){
			if(2*nB==nA)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
		
		else
			cout<<"NO"<<endl;						
		--t;
	}
	return 0;
}
