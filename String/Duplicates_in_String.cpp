# include<bits/stdc++.h>

using namespace std;

int main(){
    //Nested for loop is simple method as we seen in array video

    //hash method
    char name[]="prajval";
    int arr[26]={0};
    for(int i=0; i<7; i++)
    {
     int p=name[i]; 
     arr[p-97]++;
    }
 
    for(int i=0; i<26; i++)
    {
        cout<<arr[i]<<" ";
    }
       return 0;
}