# include<iostream>

using namespace std;

int main(){
    int a=4;// Stack memory
    
    int *p;
    p=new int[5]; //Heap memory
    delete []p; //memory delete

    return 0;
}