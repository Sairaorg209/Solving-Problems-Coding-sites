#include<stdio.h>

int main()
{	float withd,bankbal; int var;
	scanf("%f",&withd);
	scanf("%f",&bankbal);
	var=(int)withd;
	if(withd<=bankbal-0.50 && var%5==0 && var>0){
		bankbal=bankbal-withd-0.50;
		printf("%0.2f",bankbal);
	}
	else
		printf("%0.2f",bankbal);
		
	return 0;	
}
