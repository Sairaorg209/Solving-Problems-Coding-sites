/*
Accepted in codechef
*/
#include<iostream>
using namespace std;

int main(){
	int t,n,k,revLost;
	cin>>t;
	while(t!=0){
		cin>>n>>k;
		revLost=0;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>k){
				revLost+=(arr[i]-k);
			}
		}
		cout<<revLost<<endl;
		--t;
	}
	return 0;
}
