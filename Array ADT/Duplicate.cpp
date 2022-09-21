# include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10]={1,2,3,4,4,5,6,8,8,8};
    int arr1[10]={0};
    for(int i=0; i<10; i++)
    {
       arr1[arr[i]]++;
    }
    for(int i=0; i<10;i++)
    {
        if(arr1[i]>1){
        cout<<"Duplicate: "<<i+1<<" for "<<arr1[i]<<" times"<<endl;
    }
    }
    return 0;
}