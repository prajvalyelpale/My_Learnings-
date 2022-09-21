# include<iostream>

using namespace std;
void Reverse(int arr[],int n)
{
    int brr[n];
    for(int i=n,j=0; i>=0; j++, i--){
        int brr[j]=arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<brr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    Reverse(arr,5);
    return 0;
}