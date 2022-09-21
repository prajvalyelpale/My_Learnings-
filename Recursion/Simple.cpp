# include<iostream>

using namespace std;
int print(int a)
{
    if(a>0){
    return a+print(a-1);
    }
}
int main(){
    int a=50; 
    cout<<print(a);
    return 0;
}