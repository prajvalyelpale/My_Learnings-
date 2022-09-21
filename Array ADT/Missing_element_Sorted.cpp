#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     int a,c=INT_MAX,index;
	     cin>>a;
	     int sum=0;
	     int arr[a];
        	     for(int i=1; i<=a;i++){
        	         cin>>arr[i];
        	     }
        	     for(int i=1; i<=a;i++){
        	        sum=sum+arr[i];
        	     }
        	     for(int i=1; i<=a; i++){
        	         int b=sum+arr[i];
        	         if(c>b){
                     c=b;
        	         index=i;
                     }
        	     }
        	     cout<<index<<endl;
	 }
	return 0;
}
