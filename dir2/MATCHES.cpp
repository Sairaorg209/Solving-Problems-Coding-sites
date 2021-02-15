#include<iostream>
using namespace std;

int calMatches(int sum,int count){
	if (sum==0)
		return 0;
	else{
		int temp=sum%10;
		
		switch(temp){
			case 0:
				count+=6;
				break;
			case 1:
				count+=2;
				break;
			case 2:
				count+=5;
				break;		
			case 3:
				count+=5;
				break;
			case 4:
				count+=4;
				break;
			case 5:
				count+=5;
				break;
			case 6:
				count+=6;
				break;
			case 7:
				count+=3;
				break;
			case 8:
				count+=7;
				break;
			case 9:
				count+=6;
				break;
			
			default:
				break;		
			}
		sum=sum/10;
		//cout<<"Count as of now: "<<count<<" Sum: "<<sum<<endl;
		count+=calMatches(sum,0);
		return count;
		}
}

int main(){
 	int count,t,a,b,n,r,res;
 	cin>>t;
 	while(t!=0){
 		cin>>a>>b;
 		count=0;
 		res=0;
 		n=a+b;
 		res=calMatches(n,count);
		cout<<res<<endl; 
 		--t;
	 }
	 
 	return 0;
 }
