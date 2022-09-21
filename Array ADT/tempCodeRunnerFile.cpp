#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}
void swap(string s,string cpy,int n)
{
	    if(n%2==0){}
        int k=0;
		for(int i=0; i<(n/2); i++)
		{
			if(s==cpy)
			{
			cout<<"YES"<<endl;
            return;
			}
			else{
			char temp=s[k];
			s[k]=s[n-1-k];
			s[n-1-k]=temp;
			 if(i==(n/2)-1)
			{
				cout<<"NO"<<endl;
				return;
			}
			k++;
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
	    string s,ss;
	    cin>>s;
		ss=s;
	    string copy=sortString(s);
		swap(ss,copy,n);
	}
	return 0;
}