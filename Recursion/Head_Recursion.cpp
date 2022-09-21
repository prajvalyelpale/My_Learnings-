# include<iostream>

using namespace std;

// Head Recursion -> In this type of Recursion funtion is called first and then other operations.

void fun(int n)
{
   if(n>0){
    fun(n-1);
    cout<<n<<endl;
   }
}

int main(){ 
      int a=5;
      fun(5); 

    
    return 0;
}