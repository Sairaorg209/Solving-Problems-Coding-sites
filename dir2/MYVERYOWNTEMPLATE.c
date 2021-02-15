#include<stdio.h>
#include<stdlib.h>
int countLY(int diff, int sign){
	int i,yr=2001,count=0;
	if(sign==0){
		for(i=0;i<diff-1;i++){
			yr=yr+i;
			if(yr%4==0){
				++count;
				printf("\nYear=%d count=%d\n",yr,count);
			}
				
		}
	}
	else{
		for(i=0;i<diff;i++){
			yr=yr-i;
			if(yr%4==0)
				++count;
		}
	}
	return count;
}
int main(){
	int ny,diff,day,ly=0;
	scanf("%d",&ny);
	printf("%d",ny);
	diff=ny-2001;
	if(diff<0){
		diff=abs(diff);
		ly=countLY(diff,1);
		}
	else
		{
		ly=countLY(diff,0);
		}
	printf("\n%d\n",diff);
	
	printf("Leap years in between=%d\n",ly);
	day=(diff+ly)%7;
	
	
	switch(day){
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("Tuesday");
			break;
		case 3:
			printf("Thursday");
			break;
		case 4:
			printf("Friday");
			break;
		case 5:
			printf("Saturday");
			break;
		case 2:
			printf("Wednesday");
			break;
		case 6:
			printf("Sunday");
			break;
		default:
			break;		
			
	}
}
