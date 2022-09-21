# include<iostream>

using namespace std;

class rectangle
{
    private:
    int len;
    int bre;

    public:
    rectangle()
    {
    len=0;
    bre=0;
    }
    
    rectangle(int l,int b){
        len=l;
        bre=b;
    }
    int area(){
        return len*bre;
    }
    int perimeter();
    
    ~rectangle(){
        cout<<"Didtroctor"<<endl;
    }
};

int rectangle::perimeter(){
    return 2*(len+bre);
}
int main(){
    
    rectangle r(5,6);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl ;

    return 0;
}