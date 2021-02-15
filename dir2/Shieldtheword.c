#include<stdio.h>
void checkMsg(char *msg){
	int flag=0,flag1=0;
	int vowc=0;
	int conc=0;
	int i=0;int track=0;
	while(msg[i]!='\0'){
		if(msg[i]=='a' || msg[i]=='e' || msg[i]=='i' || msg[i]=='o' || msg[i]=='u'){
			vowc++;
			flag=1;
		}
		else
		{	if(flag==0){
			track++;
			if(track==3)
				flag1=1;
			}
			else{
				track=0;
			}
			conc++;
			flag=0;
		}
		i++;
	}
	if(conc>vowc || flag1==1)
		printf("hard\n");
	else
		printf("easy\n");	

	}
int main(){
	long t;int i,j;
	scanf("%ld",&t);
	char ch[50];
	for(i=0;i<t;i++){
		scanf("%s",&ch);
		checkMsg(ch);	
	}
	
}
