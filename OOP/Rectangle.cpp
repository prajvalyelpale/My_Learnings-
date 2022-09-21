# include<iostream>

using namespace std;

class rec
{
    private:
    int len;
    int bre;

    public:
    void setlb(int l, int b){
        len=l;
        bre=b;
    }

    int area()
    {
        return len*bre;
    }
};

int main(){

    rec r1;
    r1.setlb(5,6);
    cout<<"Area of rectangle: "<<r1.area();
    

    return 0;
}