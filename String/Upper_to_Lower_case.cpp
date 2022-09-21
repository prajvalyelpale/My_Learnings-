# include<bits/stdc++.h>

using namespace std;

int main(){
    char arr[5]="RAIN";
    for(int i=0; i<5; i++)
    {
        arr[i]=arr[i]+32;
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i];
    }
    return 0;
}