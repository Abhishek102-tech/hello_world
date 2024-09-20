#include <iostream>

using namespace std;

//here this is a function prototype
int sum(int,int);
//the prototype of g is
// void g(void);
//but we can also use this as
void g();

int main(){
    int num1,num2;
    //here num1 nad num2 are actual parameters
    cout<<"Enter First No."<<endl;
    cin>>num1;
    cout<<"Enter Second No."<<endl;
    cin>>num2;
    cout<<"The Sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a,int b){
    /*formal parameters a and b will be 
    taking values of actual parameters num1 nad num2*/
int c=a+b;
return c;
}

/*Here g is a void fuction it does
not take anything from the user and 
doesn't return anything*/
void g(){
    cout<<"Hello , Good Morning"<<endl;
}