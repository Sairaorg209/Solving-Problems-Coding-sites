#include<iostream>
using namespace std;

void viewMatrix(int arr[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=0;
		}
	}
	viewMatrix(arr);
	
	int startRow=0,endRow=2,startColumn=0,endColumn=2,counter=0;
	int I=startRow,J=startColumn;
	while(J<=endColumn){
		counter++;
		arr[I][J]=counter;
		J++;
	}
	++startRow;
	I=startRow;
	J=endColumn;
	while(I<=endRow){
		counter++;
		arr[I][J]=counter;
		I++;
	}
	--endColumn;
	I=endRow;
	J=endColumn;
	while(J>=startColumn){
		counter++;
		arr[I][J]=counter;
		J--;	
	}
	--endRow;
	I=endRow;
	J=startColumn;
	while(J<=endColumn){
		counter++;
		arr[I][J]=counter;
		J++;
	}
	/*
	cout<<"StartColumn "<<startColumn<<endl;
	cout<<"EndColumn "<<endColumn<<endl;
	cout<<"StartRow "<<startRow<<endl;
	cout<<"EndRow "<<endRow<<endl;
	cout<<"I "<<I<<endl;
	cout<<"J "<<endRow<<endl;
	*/		
	viewMatrix(arr);
	return 0;
}
