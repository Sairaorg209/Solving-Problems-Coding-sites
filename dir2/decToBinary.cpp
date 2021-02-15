#include<iostream>
using namespace std;

int countBinaryOnes(int num){
	int index,bit,count=0;;
	for(index=11;index>=0;index--){
		bit=num>>index;
		if(bit&1){
			count++;
		}
	}
	return count;
	}


int main(){
	int tCase,num,sum=0;
	cin>>tCase;
	while(tCase!=0){
	sum=0;	
	cin>>num;
	sum+=(num/2048)+countBinaryOnes(num%2048);
	cout<<sum<<endl;
	--tCase;
	}
	
return 0;
}

