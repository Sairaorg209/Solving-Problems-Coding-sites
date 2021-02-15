#include <iostream>
#include<algorithm>
using namespace std;

long compareSides(long *a,long *b, long n){
	long sum=0;
	for(long k=0;k<n;k++){
		sum+=(a[k]<b[k])?a[k]:b[k];
	}
	return sum;
}

int main(){
	long t,n;
	cin>>t;
	while(t!=0){
		cin>>n;
		long a[n];
		long b[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		for(long j=0;j<n;j++){
			cin>>b[j];
		}
		sort(a,a+n);
		sort(b,b+n);
		
		cout<<compareSides(a,b,n);
		--t;
	}
	
	return 0;
}
