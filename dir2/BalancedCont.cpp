#include<iostream>
using namespace std;

int main(){
	int t, num_prob;
	long part,temp;
	int flag_ckwk,flag_hard;
	cin>>t;
	while(t!=0){
		flag_ckwk=0;
		flag_hard=0;
		cin>>num_prob>>part;
		while(num_prob!=0){
			cin>>temp;
			if(temp<=part/10)
				flag_hard++;
			else if(temp>=part/2)
				flag_ckwk++;		
			num_prob--;
		}
		if(flag_hard==2 && flag_ckwk==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;	
		t--;
	}
	return 0;
}

