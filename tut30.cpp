#include <iostream>

using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int x,int y);

    void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex ::Complex(int x,int y){ //This is a parametrized constructor
    a=x;
    b=y;
}



int main(){
    //Implicit call
    Complex c1(5,6);
    //Explicit call
    Complex c2 =Complex(4,9);
    c1.printnumber();
    c2.printnumber();
    return 0;
}