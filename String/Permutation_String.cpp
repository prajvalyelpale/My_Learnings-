# include<bits/stdc++.h>

using namespace std;
//If n is length of string then total n! combinations are possible;;;;;;;;;;;;;;;;;;;;
void permutation(char s[],int k)
{
    static int a[3]={0};
    static char rec[3];
    int i;
    if(s[k]=='\0'){
        rec[k]='\0';
        for(int j=0 ; j<3; j++){
            cout<<rec[i];
        }
        cout<<endl; 
    }
  else{
    for(int i=0;s[i]!='\0'; i++)
    {
        if(a[i]==0){
            rec[k]=s[i];
            a[i]=1;
            permutation(s,k+1);
            a[i]=0;
        }
    }
  }
}
int main(){
    char a[]="abc";
    int k=3;
    permutation(a,k);
    return 0;
}