# include<iostream>

using namespace std;
//iterative method
int binary(int arr[],int k)
{
   int l,m,h;
   l=0; 
   h=10-1;
   while(l<=h)
   {
    m=(l+h)/2;
    if(k==arr[m])
    return m;
    else if(k<arr[m])
    h=m-1;
    else
    l=m+1;
   }
   return -1;
}
//Recusive method 
int Rbinary(int arr[],int ll, int hh,int key)
{  int mid;

   if(ll<=hh)
   {
    mid=(hh+ll)/2;
    if(key==arr[mid])
    return mid;
    else if (key<arr[mid])
    return Rbinary(arr,ll,mid-1,key);
    else
    return Rbinary(arr,mid+1,hh,key);

   }
   return -1;
}
int main(){
    //already sorted
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<binary(arr,5)<<endl;;
    cout<<Rbinary(arr,0,10,5); 
    return 0;
}