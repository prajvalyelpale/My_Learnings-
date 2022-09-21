# include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n)
{
    if(n>0){return m*pow(m,n-1);}
    
}
int main(){
    cout<<power(5,3);
    return 0;
}