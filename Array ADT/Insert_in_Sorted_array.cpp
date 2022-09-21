# include<iostream>

using namespace std;

int main(){
    int arr[10]={1,2,3,5,6,7};
    int *ptr;
    ptr=arr;
    int a=4;
    int i=5-1;
    while(i>=0 && arr[i]>a)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=a;
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]," ";
    }
    return 0;
}