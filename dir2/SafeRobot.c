#include<stdio.h>
#include<string.h>

int main(){
	
	
	int x, y, n, m, i, flag, t;
	
	scanf("%d",&t);
	
	while(t!=0){
	
	flag = 0;
	x = 0;
	y=0;
	
	char *str,arr[10];
	
	scanf("%d%d",&n,&m);
	
	scanf("%s", &arr);
	
	str=arr;
	//printf("%s",str);
	
	for(i = 0;i < strlen(str); i++){
		switch(str[i]){
			case 'L':
				x -= 1;
				break;
			case 'R':
				x += 1;
				break;
			case 'U':
				y += 1;
				break;
			case 'D':
				y -= 1;
				break;		
			
			default:
			    break;	
		}
		if(abs(x)>=m || abs(y)>=n){
			flag = 1;
			
		}
	}
	//printf("%d", strlen(str));
	
	if(flag == 1)
		printf("unsafe\n");
	else
		printf("safe\n");
	
	t--;
	}
	return 0;
}
