#include <iostream>
using namespace std;
void arrays(int arr[],int n)
{
    int s=n+1;
    int darr[s];
    for(int i=0; i<n; i++){darr[i]=arr[i];}
    int count=0;
    for(int  i=0 ; i<n ; i++)
    {
        if(arr[i]!=i+1){count++;}
    }
    if(count==n)
    {
        cout<<"0"<<endl;
        return;
    }


    else
    {
        for(int x=1; x<=s; x++)
        {
        for(int i=1; i<=s ; i++)
        {
            for(int i=0; i<n; i++){darr[i]=arr[i];}
            for (int j = s-1; j >= i; j--)
             darr[j] = darr[j - 1];
             darr[i - 1] = x;
             
             int cc=0; 
             for(int p=0; p<s; p++)
             {
                 if(darr[p]!=p+1)
                 cc++;
                 //cout<<darr[p]<<"-"<<p+1<<endl;;
             }
             if(cc==s){cout<<i-1<<endl; return;}
        }
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n ; i++)
	    {
	        cin>>arr[i];
	    }
        arrays(arr,n);
	}
	return 0;
}
