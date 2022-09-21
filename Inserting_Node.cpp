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
void Inserting(struct Node *p,int k,int i)//Only insert element 
{
  
    struct Node *temp,*q;
    temp=new Node();
    temp->data=k;
    temp->next=NULL;
    if(i==0)
    {

        first=new Node();
        temp->next=first;
        first=temp;
    }
    else
    {
        for(int i=0; i<i-1; i++)
        p=p->next;

        temp->next=p->next;
        p->next=temp;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    //createLL(arr,5);
    //Display(first);
    //int key=10;
    //int index=2;
    //Inserting(first,key,index);
    Inserting(first,0,10);
    // Inserting(first,1,20);
    // Inserting(first,2,30);
    // Inserting(first,3,40);
    // Inserting(first,4,50);
    Display(first);
    return 0;
}