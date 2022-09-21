# include<iostream>

using namespace std;

int fun(int n)
{   if(n>0){return fun(n-1)+n;
    }
}
    
int main(){
    int a=10;
    cout<<fun(a)<<endl;
    return 0;
}