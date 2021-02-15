/*Sansa was fond of solving mathematics equations. One day she had argued with her teacher and her teacher gave her a task to solve.

The task was to find the first value of X at which the function F(X) = aX^2 + bX + C will give the positive value.

Say if the equation is X^2 - 10X - 20; then the value of X where F(X) becomes positive first time is 12.

Input: The First line contains T Next T lines have three Integers a, b, c;

Output: Value of X for each test case.

Constraints:

1<= T <= 10

1 <= a <= 10

-1000 <= b, c <= 1000

Author: Upendra
Sample Input (Plaintext Link)

1
1 -10 -20

Sample Output (Plaintext Link)

12

*/
#include<stdio.h>
#include<math.h>
int main()
{int a[10],t1,i;long x1,s,b[10],c[10],x[10];
printf("Enter testcase: ");
scanf("%d",&t1);
for(i=0;i<t1;i++)
{printf("Enter co-ordinates for equation %d: ",i+1);
scanf("%d%ld%ld",&a[i],&b[i],&c[i]);}
for(i=0;i<t1;i++)
{
for(x1=0;x1<500;x1++)
{
s=a[i]*x1*x1+b[i]*x1+c[i];
 if(s>0)
 break;
}
x[i]=x1;
}
for(i=0;i<t1;i++)
printf("%ld",x[i]);
return 0;}
