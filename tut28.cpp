#include <iostream>

using namespace std;

class Y;

class X{
    friend void Add(X ,Y );
    int n1;
    public:
    void setOperator(int a){
    n1=a;
    }
};

class Y{
    friend void Add(X ,Y );
    int n2;
    public:
    void setOperator(int b){
    n2=b;
    }
};

void Add(X o1,Y o2){
    cout<<"The sum Of two numbers is: "<<(o1.n1+o2.n2)<<endl;
}

int main(){
    X num1;
    num1.setOperator(45);
    Y num2;
    num2.setOperator(45);
    Add(num1,num2);
    return 0;
}