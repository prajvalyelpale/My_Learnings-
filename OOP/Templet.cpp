# include<iostream>

using namespace std;

template <class T>
class rectangle
{
    private:
    T len;
    T bre;

    public:
    rectangle(){
        len=0;
        bre=0;
    }
    rectangle(T l,T b){
        len=l;
        bre=b;
    }
    T area();
};
template <class T>
T rectangle<T>::area()
{
    return len*bre;
}
int main(){
    rectangle<float> r(5.6,7);
    cout<<"Area is: "<<r.area();
    
    return 0;
}