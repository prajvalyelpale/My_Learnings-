# include<bits/stdc++.h>

using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
struct Node *first;
struct Node *last,*temp;
void createLL(int arr[],int n)
{
   
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
void InsertLL(struct Node *p, int k)
{
    struct Node *New;
    New=new Node();
    New->data=k;
    New->next=NULL;
    last->next=New;
    last=New;
}
void Display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    int arr[5]={1,2};
    createLL(arr,2);
    InsertLL(first,3);
    Display(first);
    
    return 0;
}