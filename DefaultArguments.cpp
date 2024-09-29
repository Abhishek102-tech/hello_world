#include <iostream>

using namespace std;

class Simple{
    int data1,data2;
    public:
    Simple(int a,int b=9){ //constructor with default arguments
        data1=a;
        data2=b;
    }

    void printdata();
};

void Simple::printdata(){
    cout<<"The value of data is: "<<data1<<" and "<<data2<<endl;
}



int main(){
    int k,j;
    cout<<"Enter two Numbers: "<<endl;
    cin>>k>>j;
    Simple s(k);
    s.printdata();
    return 0;
}