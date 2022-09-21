# include<iostream>

using namespace std;

int main(){
    int arr1[]={3,8,16,20,25};
    int arr2[]={4,10,12,22,23};
    int arr[10];
    int i=0,j=0,k=0;
    while(i<5 && j<5){
        if(arr1[i]<arr2[j])
        arr[k++]=arr1[i++];
        else
        arr[k++]=arr2[j++];

    }
    for(;i<5; i++)
    arr[k++]=arr1[i];
    for(;j<5;j++)
    arr[k++]=arr2[j];

    for(int t=0 ; t<10; t++)
    {
        cout<<arr[t]<<endl;
    }
    return 0;
}