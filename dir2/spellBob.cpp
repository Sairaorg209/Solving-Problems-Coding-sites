#include<iostream>
using namespace std;
int main(){
	long long tCase;
	string cardFr,cardBk;
	cin>>tCase;
	while(tCase!=0){
		cin>>cardFr;
		cin>>cardBk;
		if((cardFr[0]=='b' || cardBk[0]=='b') && (cardFr[1]=='o' || cardBk[1]=='o') && (cardFr[2]=='b' || cardBk[2]=='b'))
			cout<<"yes\n";
		else if((cardFr[0]=='o' || cardBk[0]=='o') && (cardFr[1]=='b' || cardBk[1]=='b') && (cardFr[2]=='b' || cardBk[2]=='b')) 
			cout<<"yes\n";
		else if((cardFr[0]=='b' || cardBk[0]=='b') && (cardFr[1]=='b' || cardBk[1]=='b') && (cardFr[2]=='o' || cardBk[2]=='o')) 		
			cout<<"yes\n";
		else
			cout<<"no\n";	
				
		--tCase;
	}
	return 0;
}
