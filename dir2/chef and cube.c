#include<stdio.h>
#include<string.h>

int checkchar(char *front,char *back,char *left,char *right,char *top,char *bottom)
{
if (strcmp(front,left)==0 && strcmp(front,bottom)==0)
		return 1;
else if (strcmp(front,left)==0 && strcmp(front,top)==0)
		return 1;
else if (strcmp(front,right)==0 && strcmp(front,bottom)==0)
		return 1;
else if (strcmp(front,right)==0 && strcmp(front,top)==0)
		return 1;
else if (strcmp(back,left)==0 && strcmp(back,bottom)==0)
		return 1;
else if (strcmp(back,left)==0 && strcmp(back,top)==0)
		return 1;
else if (strcmp(back,right)==0 && strcmp(back,bottom)==0)
		return 1;
else if (strcmp(back,right)==0 && strcmp(back,top)==0)
		return 1;	
else 
	return 0;			
} 
int main()
{long t;long i;
scanf("%ld",&t);
char a[20],b[20],c[20],d[20],e[20],f[20];
int rs;
for (i=1;i<=t;i++)
{scanf("%s%s%s%s%s%s",&a,&b,&c,&d,&e,&f);
rs=checkchar(a,b,c,d,e,f);
if(rs==1)
 printf("YES\n");
else
 printf("NO\n");  
rs=-1; 
}
return 0;
}
