# include<iostream>

using namespace std;

void fun(int *A,int n){
    A[0]=25;
    
    for(int i=0; i<n;i++){
        cout<<A[i]<<endl;
    }
}
int main(){
    
    int A[5]={1,2,3,4,5};
    
    // for(int y : A){
    //     cout<<y<<endl;
    // }

    fun(A,5);
     cout<<A[0];//Function can modify actual values.

    return 0;
}