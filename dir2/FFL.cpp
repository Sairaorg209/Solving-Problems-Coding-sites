//Accepted in LunchTime
#include<iostream>
using namespace std;

int getMin(int *arr,int size){
	int min=100;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int T,N,S,type,i,j,k,minFwd,minDef,teamFlag;
	cin>>T;
	while(T!=0){
		cin>>N;
		cin>>S;
		int Fwd[N],Def[N],Ply[N];
		for(i=0;i<N;i++){
			cin>>Ply[i];
		}
		j=0;
		k=0;
		minFwd=0;
		minDef=0;
		teamFlag=0;
		for(i=0;i<N;i++){
			cin>>type;
			if(type==0){
		//		cout<<"Defender added "<<Ply[i];
				Def[j]=Ply[i];
				j++;
				if(teamFlag==0)
				teamFlag++;
				if(teamFlag==1)
				teamFlag++;
			}
			else if(type==1){
		//		cout<<"Forward added "<<Ply[i];
				Fwd[k]=Ply[i];
				k++;
				if(teamFlag==0)
				teamFlag++;
				if(teamFlag==1)
				teamFlag++;
			}
		}
		//cout<<"TeamFlag "<<teamFlag<<endl;
		if(teamFlag==2){
		minDef=getMin(Def,j);
		minFwd=getMin(Fwd,k);
			
		//cout<<" minFwd "<<minFwd<<" and minDef "<<minDef<<endl;
		
		if((minDef+minFwd)<=100-S)
			cout<<"yes\n";
		else
			cout<<"no\n";	
		}
		else
			cout<<"no\n";
		--T;
	}
	return 0;
}
