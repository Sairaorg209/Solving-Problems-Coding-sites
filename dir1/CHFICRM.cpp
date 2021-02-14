/*
Solution accepted in codechef
*/
#include<iostream>
using namespace std;

int main(){
	unsigned long long t,n,i,c_5,c_10;
	bool flag=true;
	cin>>t;
	while(t!=0){
		cin>>n;
		flag=true;
		i=0;
		c_5=0;
		c_10=0;
		int arr[n];
		while(i<n){
			cin>>arr[i];
			if(arr[i]!=5 && i==0){
				flag=false;
				//cout<<"Condition 1"<<endl;
			}
			else if(arr[i]==5){
				c_5++;
				//cout<<"Condition 2"<<endl;
			}
			else if(arr[i]==10){
				if(c_5<1){
					flag=false;
					//cout<<"Condition 3"<<endl;
				}
				else{
					c_5--;
					c_10++;
					//cout<<"Condition 4"<<endl;
				}
			}
			else if(arr[i]==15){
				if(c_10<1 && c_5<2){
					flag=false;
					//cout<<"Condition 5"<<endl;
				}
				else{
					if(c_10>=1)
						c_10--;
					else if(c_5>=2)
						c_5=c_5-2;
					//cout<<"Condition 6"<<endl;
				}
			}
			
			++i;
		}
		if(flag==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
		--t;
	}
	return 0;
}
