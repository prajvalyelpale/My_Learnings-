# include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10]={6,3,8,10,16,7,5,2,9,14};
    for(int i=0; i<9; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(arr[i]+arr[j]==10)
            cout<<"Pair: "<<arr[i]<<","<<arr[j]<<endl;
        }
    }
    return 0;
}