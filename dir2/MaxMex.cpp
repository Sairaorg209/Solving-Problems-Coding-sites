#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	long t,n,min,k,temp;
	cin>>t;
	long dir[100000];
	while(t!=0){
		fill(dir, dir + 100000, -1); 
		min=0;
		cin>>n>>k;
		while(n!=0){
			cin>>temp;
			dir[temp]=0;
			if(min==temp)
				++min;		 	
			else if(min>temp)
				min=temp;
				
			n--;
		}
		if(k==0 && dir[min]!=0)
			cout<<min<<endl;
			
		else if(k==0 && dir[min]==0){
			while(dir[min]==0)
				++min;		
			
			cout<<min<<endl;
		}
		else if(k>0){
			while(k!=0){
				++min;
				if(dir[min]==0){
					++min;
					if(dir[min]==0){
						while(dir[min]==0)
							++min;
					}
				}
					
				
				k--;
			}
		cout<<min<<endl;
		}	
	
	t--;
	}
	
}
