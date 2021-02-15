#include <iostream>
using namespace std;

int main() {
    long long t,r,n,x,s,flag,a[2];
    cin>>t;
    while(t!=0){   
        cin>>n;
        cin>>x;
        cin>>s;  
        flag=x;
        while(s!=0){

        cin>>a[0]; 
		cin>>a[1];
	//	cout<<a[0]+a[1]<<endl;
        if(a[0]==flag || a[1]==flag){
                   if(flag==a[0])
                          flag=a[1];
                   else
                          flag=a[0];
                    }
	//	cout<<flag<<endl;
        --s;

        }
       	cout<<flag<<endl;
        --t;
    }
    return 0;
}

