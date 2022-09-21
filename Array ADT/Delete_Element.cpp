# include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ptr;
    ptr=arr;
    int index=3;
    for(int i=index; i<len-1 ;i++){
    ptr[i]=ptr[i+1];
    } 
    ptr--;
    len--;
    for(int i=0 ; i<len; i++){
        cout<<arr[i];
    }
    return 0;
}