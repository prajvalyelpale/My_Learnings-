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
void InsertAtSorted(struct Node *p, int k)
{
    struct Node *New,*q;
    New=new Node();
    New->data=k;
    New->next=NULL;
    //q=p;
    while(p!=NULL)
    {
        if(p->data>k)
        {
           q->next=New;
           New->next=p;
        }
        q=p;
        p=p->next;

    }
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
    int arr[6]={1,2,3,4,6,100};
    createLL(arr,6);
    InsertAtSorted(first,5);
    InsertAtSorted(first,10);
    Display(first);
    
    return 0;
}