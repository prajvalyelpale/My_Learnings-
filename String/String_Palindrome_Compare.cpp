# include<bits/stdc++.h>

using namespace std;

int main(){
     // The string which is same as it is on reversing is called Palindrome. 
     char p[]="madam";
     int len=5;
     char cpy[len];
     char a;
     for(int i=0,j=len-1; i<len; i++,j--){
     cpy[i]=p[j];
     }
     int count=0;
     for(int i=0; i<len; i++)
     {
        cout<<cpy[i];
        if(cpy[i]==p[i])
        {
            count++;
        }
     }
     if(count==len)
     cout<<"\nString is Palindronme"<<endl;
    return 0;
}