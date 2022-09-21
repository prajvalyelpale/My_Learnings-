# include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10]={8,3,6,4,6,5,6,8,2,7};
    int i=0,j=1;
    for(i=0; i<10 ; i++)
    {
        int count=1;
        int num;
        for(j=i+1; j<9; j++)
        {
            if(arr[i]==arr[j] && arr[j]!=-1){
            arr[j]=-1;
            num=arr[i];
            count++;
            }
        }
        if(count>1)
        cout<<num<<" is Duplicate for " << count<<" times "<<endl;
    }
    return 0;
}