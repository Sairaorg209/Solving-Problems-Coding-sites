#include <iostream>
using namespace std;

int main() {
    long long t,n,m,x,y,tFlag;
    cin>>t;
    while(t!=0){
    	cin>>n>>m>>x>>y;
    	--n;
    	--m;
    	tFlag=0;
    	
		if((n==m) && (n==1)){
			//cout<<"Case1";
			tFlag=1;
		}
		
    		
    	
		else if((n%x) == (m%y)){
    		if((n%x)==1 || (m%y)==0){
			//cout<<"Case2";
			tFlag=1;
			}
		} 
    	
    	
    	if(tFlag==1)
    		cout<<"Chefirnemo"<<endl;
    	else
			cout<<"Pofik"<<endl;	
    	--t;
	}
    
    return 0;
}

