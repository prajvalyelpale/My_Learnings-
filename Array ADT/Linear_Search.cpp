# include<iostream>

using namespace std;
void swap();
int search(int arr[],int k)
{
    for(int i=0; i<9; i++)
    {
        if(arr[i]==k){
         //Transposition
         swap(arr[i],arr[i-1]);//for the head search method swap the ith element with 0th index
          return i;
        }
       
    }
    return -1;
}
void swap(int &x , int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main(){
       int arr[9]={1,2,3,4,5,6,7,8,9};
       int a=search(arr,6);
       cout<<a<<endl;
       int aa=search(arr,6);
       cout<<aa<<endl;
       
       
    return 0;
}