# include<iostream>

using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int *p;
    p=new int[1];
    p[0]={5};
    cout<<p[0];
    delete []p;
    free(p);
    // p=A;
    // for(int i=0; i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    return 0;
}