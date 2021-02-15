#include<iostream>
using namespace std;

long long int findOptimalSum(long long int arr[],long long int index, long long int k,long long int n){
	long long int sum=0,j;
	for(j=index;j<n;j=j+k){
		sum=sum+arr[j];
	}
	return sum;
}

long long int findBestSum(long long int arr[],long long int k,long long int n){
	long long int sum=0,j,temp=0;
	for(j=0;j<n;j++){
		temp=findOptimalSum(arr,j,k,n);
		if(temp>sum)
			sum=temp;
		if(j==0)
			sum=temp;	
		cout<<"Sum is "<<sum<<"and temp is "<<temp<<endl;
	}
	return sum;
}
int main(){
	long long int T,N,K,i;
	long long int arr[100000];
	cin>>T;
	while(T!=0){
		cin>>N;
		cin>>K;
		i=0;	
		while(i!=N){
			cin>>arr[i++];
		}
		cout<<findBestSum(arr,K,N);
		--T;
	}
	return 0;
}
