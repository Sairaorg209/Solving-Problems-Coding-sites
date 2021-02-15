#include<iostream>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		int n,first,second=0,flag=1;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			{
				if(flag==1)
				{
					first=i;
					flag=0;
				}
				else
				{
					second=first;
					first=i;
					if(first-second<6)
					{
						flag=2;
					}
				}
			}
		}
		if(flag==0)
		cout<<"YES\n";
		else if(flag==2)
		cout<<"NO\n";
	}
    return 0;
}
