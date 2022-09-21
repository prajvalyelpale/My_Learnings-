# include<bits/stdc++.h>

using namespace std;
struct Node
{
    int c;
    int p;
    struct Node *next;
};
struct Node *first=NULL;
void createpolyLL(int arr1[],int arr2[],int n)
{
  struct Node *temp,*last;
  first=new Node();
  first->c=arr1[0];
  first->p=arr2[0];
  first->next=NULL;
  last=first;
  for(int i=1; i<n;i++)
  {
    temp=new Node();
    temp->c=arr1[i];
    temp->p=arr2[i];
    last->next=temp;
    last=temp;
  }
}
void Display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Coefficient: "<<ptr->c<<" "<<"Power: "<<ptr->p<<endl;
        ptr=ptr->next;
    }
}
int main(){
    int coe[4]={5,4,3,2};
    int pow[4]={3,2,1,0};
    int n=4;
    createpolyLL(coe,pow,n);
    Display(first);
    return 0;
}