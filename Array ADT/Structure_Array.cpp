# include<iostream>

using namespace std;
struct Array
{
    int *A;
    int size;
    int lenght;
};
int main(){
  struct Array arr;
  cout<<"Enter the size of the array: ";
  cin>>arr.size;
  arr.A=new int[arr.size];  
  for(int i=0; i<arr.size ; i++)
  {
    cin>>arr.A[i];
  }
  for(int i=0; i<arr.size ; i++)
  {
    cout<<arr.A[i]<<endl;
  }
  
  delete[]arr.A;
    return 0;
}