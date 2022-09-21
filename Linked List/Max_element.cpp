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
int Max(struct Node *ptr)
{
    int max=0;
    while(ptr!=NULL)
    {
        if(ptr->data>max)
        max=ptr->data;
        ptr=ptr->next;
    }
    return max;
}
int main(){
    int arr[5]={11,42,35,14,58};
    createLL(arr,5);
    int m=Max(first);
    cout<<m<<endl;
    return 0;
}