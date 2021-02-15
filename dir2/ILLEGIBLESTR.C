/*
Your friend Max has written a string S in your textbook. The string consists of lowercase latin letters. The problem is that Max is not good at writing at all! Especially, you never know if he wanted to write "w" or two consecutive "v". Given the string S, return the minimum and maximum length of a word which can be represented by it. The input string represents what you initially think the word is.

Input format:

In the first line there is a single integer N denoting the length of word S. In the second line there is string S itself.

Output format:

Print the minimum and the maximum length of a word which can be represented by S. Output these numbers in one line and separate them by a single space.

Constraints:

N <= 10^6
*/
#include<stdio.h>
long long n,vcount=0,wcount=0,max,min;
void getminmax(char *msg){
	long long i;
	for(i=0;msg[i]!='\0';i++){
		if(msg[i]=='v')
			vcount++;
		else if(msg[i]=='w')
			wcount++;
		else
			continue;		
	}
	max=n+wcount;
	
	min=n-(vcount/2)+(vcount%2);
	
	printf("%lld %lld\n",min,max);
}
int main(){
	long long i;
	scanf("%lld",&n);
	char ch[n];
    scanf("%s",ch);
	getminmax(ch);
	
}
