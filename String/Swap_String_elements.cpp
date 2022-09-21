# include<bits/stdc++.h>

using namespace std;

int main(){
    char s[]="Python";
    char c;
    int len=6;
    for(int i=0,j=len-1;i<len,j>=0; i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
        cout<<s[i]<<endl;
    }
    // for(int i=0; i<len; i++)
    // {
    //     cout<<s[i];
    // }
    return 0;
}