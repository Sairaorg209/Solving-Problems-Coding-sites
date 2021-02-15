
#include <stdio.h>
int main()
{
int num,i,j;
printf("Please enter a number to print the hollow star formation \n");
scanf("%d", &num);
for(i=0;i<num;i++)
{
for(j=0;j<num;j++)
{
if(i==0 || i==num-1 )
{
printf("*");
}
else if(j==0 || j==num-1 )
{
printf("*");
}
else
{
printf(" "); // space is printed ..
}
}
printf("\n");
}
return 0;
}
