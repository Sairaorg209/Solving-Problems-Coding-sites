//Solution copied from another use after event ended
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      //  if(k==1)
        //{
          //  cout<<"yes"<<"\n";
            //continue;
//        }
        for(int i=0;i<(n-k);i++)
        {
            if(arr[i]>arr[i+k])
            swap(arr[i],arr[i+k]);
        }
        bool a=true;
        for(int i=n-k;i<(n-1);i++)
        {
            if(arr[i]<arr[i+1])
            {
                a=true;
            }
            else
            {
                a=false;
                break;
            }
        }
        if(a)
        {
            cout<<"yes"<<"\n";
        }
        else
        {
            cout<<"no"<<"\n";
        }
    }
	return 0;
}
