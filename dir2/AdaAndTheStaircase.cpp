#include <iostream>
using namespace std;

int main() {
    long long t,stepnum,diff,i,prevStep,addSteps;
    cin>>t;
    while(t!=0){
    	cin>>stepnum>>diff;
    	long long stairs[stepnum];
		addSteps=0;prevStep=0;
		for(i=0;i<stepnum;i++){
			cin>>stairs[i];
			if(i==0){
				if((stairs[i]/diff)>0){
					if(stairs[i]%diff==0)
						addSteps+=((stairs[i]/diff)-1);
					else
						addSteps+=(stairs[i]/diff);
					//cout<<"Step 0"<<addSteps;
					}
				prevStep=stairs[i];
				}
				
			else{
				if(((stairs[i]-prevStep)/diff)>0){
					if((stairs[i]-prevStep)%diff==0)
						addSteps+=(((stairs[i]-prevStep)/diff)-1);
					else
						addSteps+=((stairs[i]-prevStep)/diff);
					
					//cout<<"Step "<<i<<" "<<addSteps;
					}
				prevStep=stairs[i];	
				}	
		} 
    	
    	cout<<addSteps<<endl;
    	--t;
	}
    
    return 0;
}

