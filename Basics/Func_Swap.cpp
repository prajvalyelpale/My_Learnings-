# include<iostream>

using namespace std;

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
void swap(int &a,int &b){
    int temp=a;
    a=b;
     b=temp;
}

int main(){
    
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}