# include<iostream>

using namespace std;
   int sum(int n)
   {
    return n*(n+1)/2;
   }
//    int sumof(int n)
//    {
//     if(n>0)
//     {
//         return n+sumof(n-1);
//     }
//    }
int main(){
    int a=10;
    int b=sum(a);
    cout<<b;
    return 0;
}