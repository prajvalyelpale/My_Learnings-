# include<bits/stdc++.h>

using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
struct Node *first;
void createLL(int arr[],int n)
{
   struct Node *last,*temp;
   first=new Node();
   first->data=arr[0];
   first->next=NULL;
   last=first;
   for(int i=1; i<n; i++)
   {
    temp=new Node();
    temp->data=arr[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
   }
}
int Add(struct Node *ptr)
{
    int sum=0;
    while(ptr!=NULL)
    {
        sum+=ptr->data;
        ptr=ptr->next;
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    createLL(arr,5);
    int s=Add(first);
    cout<<s<<endl;
    return 0;
}