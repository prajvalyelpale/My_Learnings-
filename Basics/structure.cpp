# include<iostream>

using namespace std;

struct rectangle
{
    int len;
    int bre;
} r1,r2;//this is also a method to declare the variables of rectangle


int main(){

    r1.bre=10;//for checking only
    
rectangle r;
r.len=5;
r.bre=10;
cout<<"The area of rectangle is "<<r.bre*r.len;
    return 0;
}