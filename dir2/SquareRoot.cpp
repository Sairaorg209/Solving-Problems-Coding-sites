#include<iostream>
using namespace std;

long sqrtFloor(long start, long mid, long end, long num){
	//cout<<"start"<<start<<"mid"<<mid<<"end"<<end<<endl;
	
	while(start<mid){
	if((mid*mid)>num)
		return sqrtFloor(start, (start+mid)/2, mid,num);
	else if((mid*mid)<num)
		return sqrtFloor(mid, (mid+end)/2, end,num);
	else if((mid*mid)==num)
		return mid;			
	}
	
	if(mid==start)
		return mid;
	

}
int main(){
	int tCase;
	long num;
	cin>>tCase;
	while(tCase!=0){
		cin>>num;
		cout<<sqrtFloor(1,(1+num)/2, num,num)<<endl;
		--tCase;
	}
	
	
	return 0;
}
