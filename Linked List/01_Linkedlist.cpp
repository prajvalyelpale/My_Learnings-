# include<bits/stdc++.h>

using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
int main(){
    struct Node *p;
    p=new Node();
    p->data=10;
    p->next=NULL;
     while(p!=NULL)
     {
        cout<<p->data<<endl;
        p=p->next;
        
     }
    return 0;
}