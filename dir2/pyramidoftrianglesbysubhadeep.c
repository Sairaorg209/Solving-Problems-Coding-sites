#include<stdio.h>

int main()
{
	int rows,i,j,c=1;long sum=1;
	while(c==1)
	{sum=1;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	if(rows==1)
	 sum=1;
	else
	{
	for(i=2;i<rows+1;i++)
	sum=sum+(2*i-1)+i*(i-1)/2;
    }
	printf("\nPyramid with %d row(s) will have %ld triangle(s)",rows,sum);
    printf("\nPress\n1 to continue\n2 to exit: ");
    scanf("%d",&c);
	}
	return 0;
}
