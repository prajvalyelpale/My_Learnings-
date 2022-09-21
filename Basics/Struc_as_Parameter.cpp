# include<iostream>

using namespace std;
   struct rectangle
   {
    int len;
    int bre;
   };
   
   void changel(struct rectangle *p)
   {
    p->bre=50;
    cout<<p->len<<" "<<p->bre<<endl;
   }
int main(){
    rectangle r={4,5};
    changel(&r);
    cout<<r.len<<" "<<r.bre<<endl;
    
    return 0;
}