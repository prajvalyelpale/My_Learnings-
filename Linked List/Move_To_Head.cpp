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
void Display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void search_move_to_head(struct Node *p,int k)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
     if(k==p->data)
     {
       q->next=p->next;
       p->next=first;
       first=p;
     }
     q=p;
     p=p->next;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=4;
    createLL(arr,5);
    search_move_to_head(first,key);
    Display(first);
    
    return 0;
}