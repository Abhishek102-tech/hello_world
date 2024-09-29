#include <iostream>

using namespace std;

class Bank{
    float principal;
    float years;
    float Interestrate;
    public:
    Bank(int a,int b,float c){
        principal=a;
        years=b;
        Interestrate=c;
    }
     Bank(float a,float b,float c){
         principal=a;
         years=b;
        Interestrate=c;
    }
     Bank(float a,int b,float c){
         principal=a;
        years=b;
        Interestrate=c;
    }
    void Display(){
        cout<<"The amount of money deposited in the bank is "<<principal<<" for "<<years<<" with the interest rate of "<<Interestrate<<endl;
    }
    void Interest(){
        double itr=(principal*Interestrate*years)/100;
        double res=principal+itr;
        cout<<"The amount you will receive after "<<years<<" years is "<<res<<endl;
    }
};


int main(){
    int p,t;
    float i;
    float p1,t1;
    cout<<"Enter the principal amount,time in years and interest rate: "<<endl;
    cin>>p>>t>>i;
    Bank b(p,t,i);
    b.Display();
    b.Interest();
    cout<<"Enter the principal amount,time in years and interest rate: "<<endl;
    cin>>p1>>t1>>i;
    Bank b2(p1,t1,i);
    b2.Display();
    b2.Interest();
    cout<<"Enter the principal amount,time in years and interest rate: "<<endl;
    cin>>p1>>t>>i;
    Bank b3(p1,t,i);
    b3.Display();
    b3.Interest();
    return 0;
}





