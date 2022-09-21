# include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10]={6,7,9,10,11,13,14,15,16,17};
    int count=arr[0];
    for(int i=0; i<10; i++)
    {
      if(arr[i]!=count){
      cout<<"Missing element: "<<count<<endl;
      count++;
      }
      count++;
    }
    return 0;
}