# include<iostream>

using namespace std;

template<class T>
class Array
{
private:
T *A;
T size;
T len;
public:
Array()
{
    size=10;
    A=new T [10];
    len=0;
}
Array(int sz)
{
    size=sz;
    A=new T [sz];
    len=0;
}
~Array(){
    delete []A;
}

void display();
void Insert(int index, T x);
T Delete(int index);
};

template<class T>
void Array<T>:: display()
{
    for(int i=0; i<len; i++){
        cout<<A[i]<<" ";
    }
}
template<class T>
void Array<T>:: Insert(int index, T x)
{
    if(index>=0 && index<=len)
    {
     for(int i=len-1; i>=index; i--)
        A[i+1]=A[i];
     A[index]=x;
     len++;
    }
}
template<class T>
T Array<T>:: Delete(int index)
{
    T x=0;
    if(index>=0 && index<len)
    {
        x=A[index];
        for(T i=index; i<len-1; i++)
        A[i]=A[i+1];
        len--;
    }
    return x;
}
int main(){

    Array<int> arr(10);
    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Insert(2,7);
    arr.display();
    cout<<endl;
    cout<<arr.Delete(0)<<endl;
    arr.display();    
    return 0;
}