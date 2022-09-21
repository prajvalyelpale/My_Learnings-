# include<iostream>

using namespace std;

int main(){
    int *p,*q;
    int i;
    p=new int [5*sizeof(int)];

    p[0]=4;
    p[1]=10;
    p[2]=23;
    p[3]=100;
    p[5]=1000;
    q=new int [10*sizeof(int)];
    for(int i=0; i<6; i++)
    {
        q[i]=p[i];
    }
    for(int i=0; i<6; i++)
    {
        cout<<q[i]<<endl;
    }
    delete []p;
    delete []q;
    return 0;
}