#include <iostream>

using namespace std;
class c2;

class c1{
    friend void exchange(c1 &val1,c2 &val2);
    int n1;
    public:
    void inData(int a){
        n1=a;
    }
    void Display(void){
        cout<<"The value is: "<<n1<<endl;
    }
};

class c2{
    friend void exchange(c1 &val1,c2 &val2);
    int n2;
    public:
    void inData(int b){
        n2=b;
    }
    void Display(void){
        cout<<"The value is: "<<n2<<endl;
    }
};

void exchange(c1 &val1,c2 &val2){
    cout<<"The value of a nad b before swapping is:" <<val1.n1<<" and "<<val2.n2<<endl;
    int k=val1.n1;
    val1.n1=val2.n2;
    val2.n2=k;
    cout<<"The value of a and b after swapping is :"<<val1.n1<<" and "<<val2.n2<<endl;
}

int main(){
    c1 num1;
    c2 num2;
    int k,j;
    cout<<"Enter any two number"<<endl;
    cin>>k>>j;
    
    num1.inData(k);
    num1.Display();
    num2.inData(j);
    num2.Display();
    exchange(num1,num2);
    return 0;
}