#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
	int t,n,i,pos,min,max,count,breakFlag;
	cin>>t;
	while(t!=0){
		cin>>n;
		count=1;
		max=1;
		min=n;
		breakFlag=0;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(pos=0;pos<=n-2;pos++){
			if(abs((arr[pos+1]-arr[pos]))<=2){
				count++;
			if(count>max){
				max=count;
			}
			if(count<min){
				min=count;
			}	
			}
			else{
				breakFlag=1;
				min=(min>count?count:min);
				max=(count>max?count:max);
				count=1;
				if(pos+1==n-1 && count<min)
					min=count;
			}
			
			//cout<<"count: "<<count<<" min: "<<min<<" max :"<<max<<endl;
			
		}
	
		
		if(n==1){
			cout<<"1 1"<<endl;
		}
		else{
			if(breakFlag==0)
				cout<<max<<" "<<max<<endl;
			else
				cout<<min<<" "<<max<<endl;	
		}
			
		--t;
	}
	return 0;
}
