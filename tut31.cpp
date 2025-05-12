#include <iostream>

using namespace std;

class Complex{
    int a,b;

    public:
    Complex(int i,int j){
        a=i;
        b=j;
    }
    //We can have more than one constructor in a class
    Complex(int i){
        a=i;
        b=0;
    }
    void printData(){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};


int main(){
    Complex c1(2,3);
    Complex c2(7);
    c1.printData();
    c2.printData();
    return 0;
}

