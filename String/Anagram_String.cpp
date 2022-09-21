# include<bits/stdc++.h>

using namespace std;
//Anagram : two different strings contains same alphabates ex: decimal and medical
int main(){
    char s1[8]="decimal";
    char s2[8]="medical";
    int arr1[26]={0};
    int arr2[26]={0};
    for(int i=0; i<8; i++)
    {
        int k=s1[i];
        arr1[k-97]++;
    }
    for(int i=0; i<8; i++)
    {    int j=s2[i];
        arr2[j-97]++;
    }
    for(int i=0; i<26;i++)
    {
        //cout<<arr1[i]<<" "<<arr2[i]<<endl;
        if(arr1[i]!=arr2[i]){
        cout<<"Strings are not Anagram!!"<<endl;
        break;
        }
        else if(i==25)
        cout<<"Strings are Anagram";
    }
    return 0;
}