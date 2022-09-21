# include<iostream>

using namespace std;
static int i=0; 
void fun()
{
    cout<<i++;
    int b=i++;
    cout<<b;
}
int main(){
    fun();
    return 0;
}