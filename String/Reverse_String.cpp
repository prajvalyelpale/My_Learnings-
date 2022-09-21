# include<bits/stdc++.h>

using namespace std;

int main(){
    int len=0;
    char str[]="Python";
    while(str[len]!='\0'){
        len++;
    }
    // cout<<len<<endl;
    char cpy[len];
    cout<<len;
    for(int i=len-1,j=0; i>=0,j<len; j++,i--)
    {
        cpy[j]=str[i];
    }
    for(int i=0; i<len; i++)
    {
        cout<<cpy[i];
    }
    return 0;
}