# include<iostream>

using namespace std;

//Tail recursion -> when calling of function is the last in the function
void fun(int n)
{
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
int main(){
    int a=10; 
    fun(a); 
    
    return 0;
}