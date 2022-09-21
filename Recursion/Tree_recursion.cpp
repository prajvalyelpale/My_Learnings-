# include<iostream>

using namespace std;

//Tree recursion -- if a function calling itself more than one time
// Time complexcity -- Big O of 2 to the power of n//////////////////
void fun(int n)
{
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int a= 3;
    fun(a);
    return 0;
}