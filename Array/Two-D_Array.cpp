#include<iostream>
#include<math.h>
using namespace std;
int two(int n)
{
    if(n==1)
    cout<<"true"<<endl;
    else
	{
        for(int i=1; i ; i++)
		{
         if(pow(2,i)==n){
		 return true;
		 break;
		 }
		 if(i>n){
			return false;
			break;
		 }
        }
    }
}
int main(){
    int n;
    cin>>n;
   two(n);
    return 0;
}