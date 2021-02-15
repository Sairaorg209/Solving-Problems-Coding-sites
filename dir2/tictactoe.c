#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j,p;
    int a[100][100];

    printf(" ********** Zero One Match Result ************* \n");

    printf("Enter the number of which you want to form N*N matrix \n");         
    scanf("%d", &n);                 //taking input for matrix dimension
    n=n-1;
    printf("Enter the zero one game values");
    for(i=0; i<=n; i++)
    {    
         for(j=0; j<=n; j++)
         {
                 scanf("%d",&a[i][j]);            //enter the values of in zero one form
         }

         if(i!=n)
         printf("%d row complete, enter %d row\n",i+1,i+2);
    }
    printf("\n******** Your board appear as *********\n");
    for(i=0; i<=n; i++)
    {    
         for( j=0; j<=n; j++)
         {
                 printf("%d ",a[i][j]);
         }
         printf("\n");
    }

                 i=0; int d=1;
                 while(a[i][i] == a[i+1][i+1] && i<n)             //checking top left to right bottom diagonal
                 {
                       i++;
                       if(i==n)
                       {
                               printf(" winner is %d",a[0][0]);
                               d=0;
                       }        
                       continue;
                 }
                 i=0;
                 while(a[i][n-i]==a[i+1][n-i-1] && i<n)          //checking top right to bottom left diagonal
                 {
                       i++;
                       if(i==n)
                       {
                                  printf(" winner is %d",a[0][n]);
                                  d=0;
                       }
                       continue;
                 }
                  for( p=0; p<=n; p++)
                  {
                          i=0;
                          while(a[i][p]==a[i+1][p])            //checking the columns
                          {
                                 i++;
                                 if(i==n)
                                 {
                                         printf("winner is %d",a[0][p]);
                                         d=0;
                                 }
                                 continue;
                          }
                          i=0;
                          while(a[p][i]==a[p][i+1])          //checking the rows value
                          {
                                 i++;
                                 if(i==n)
                                 {
                                         printf("winner is %d",a[p][0]);
                                         d=0;        
                                 }
                                 continue;
                          }  
                  }
                  if(d==1)
                  printf("Match draw");
                 getch();
}            
