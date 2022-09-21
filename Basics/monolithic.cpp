# include<iostream>

using namespace std;

int main(){
    
    int len=0,bre=0;
    cout<<"Enter the length and bredth : ";
    cin>>len>>bre;

    int area=len*bre;
    int peri=2*(len+bre);

    cout<<"Area: "<<area<<" Perimetre: "<<peri<<endl;

    return 0;
}