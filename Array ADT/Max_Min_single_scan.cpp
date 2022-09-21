# include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10]={5,8,3,9,6,2,10,7,-1,4};
    int max=arr[0],min=arr[0];
    for(int i=0; i<10; i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    cout<<"Max: "<<max<<" "<<"Min: "<<min<<endl; 
    return 0;
}