
#include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
		string s11;
		cin>>s11;
		string s22;
		cin>>s22;
		int count=0;
		int n1=s11.length();int n2=s22.length();
		int index;
		for(int i=0; i<n1; i++)
		{
			index=s22.find(s11[i]);
			if(index!=(-1)){
			count++;
			s22[index]='@';
			}
		}
		cout<<count<<endl;
    }
	return 0;
}
