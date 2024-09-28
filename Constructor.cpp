#include <iostream>

using namespace std;
class Complex{
    
    int a,b;
    //Creating a Constructor
    public:
    Complex(void);//Constructor declaration -->this is a deafult constructor as this does not take any argument
    void printdata(){
    cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
}

};

Complex::Complex(void){
    cout<<"Enter the real part of the number: "<<endl;
    cin>>a;
    cout<<"Enter the imaginary part of the number: "<<endl;
    cin>>b;
}


int main(){
   Complex c1,c2,c3;
   c1.printdata();
   c2.printdata();
   c3.printdata();
   
    return 0;
}