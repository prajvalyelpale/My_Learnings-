# include<bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *pre;
    struct Node *next;
};
struct Node *first=NULL;
void creatLL(int arr[],int n)
{
   struct Node *temp,*last;
   first=new Node();
   first->data=arr[0];
   first->pre=NULL;
   first->next=NULL;
   last=first;
   for(int i=1; i<n; i++)
   {
    temp=new Node();
    temp->data=arr[i];
    temp->pre=last;
    temp->next=NULL;
    last->next=temp;
    last=temp;
   }
}
void printarr(struct Node *p)
{
    while ((p!=NULL))
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
}
void DeleteLast(struct Node *ptr)
{
    struct Node *q;
    while(ptr!=NULL)
    {
        if(ptr->next==NULL)
        {
            ptr->pre=NULL;
            q->next=NULL;
            delete(ptr);
            return;
        }
        q=ptr;
        ptr=ptr->next;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    creatLL(arr,5);
    printarr(first);
    cout<<"After deletion: (MY METHOD EXPLAINED IN CLASS :) )"<<endl;
    DeleteLast(first);
    printarr(first);
    return 0;
}