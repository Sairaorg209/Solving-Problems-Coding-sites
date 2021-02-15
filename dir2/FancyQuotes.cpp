#include<iostream>
#include<string.h>
using namespace std;

int main(){
	long long int T;
	char *str;
	char *res=NULL;
	cin>>T;
	while(T!=0){
		cin>>str;
		
		res=strstr(str," not ");	
		
		if(res)
			cout<<"Real Fancy"<<endl;
		else
			cout<<"regularly fancy"<<endl;
		
		res=NULL;
	
		--T;
	}
	return 0;
}
