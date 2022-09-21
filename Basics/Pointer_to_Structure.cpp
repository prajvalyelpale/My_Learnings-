# include<iostream>

using namespace std;

struct rectangle
{
    int len;
    int bre;
};
int main(){
    struct rectangle r={2,5};
    cout<<r.len<<endl;
    cout<<r.bre<<endl;

    rectangle *p=&r;
    p->len=10;
    p->bre=20;
    cout<<r.len<<endl;
    cout<<r.bre<<endl;



    return 0;
}