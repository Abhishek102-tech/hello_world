#include <iostream>

using namespace std;

class Number{
    int a;
    public:
    Number(int n){
        a=n;
    }
    Number(Number &obj){ //Copy Constructor Created
        cout<<"Copy Constructor Invoked"<<endl;
        a=obj.a;
    }
    void Display(){
        cout<<"The number for this class is "<<a<<endl;
    }
};


int main(){
    int i,j;
    cout<<"Enter any two number"<<endl;
    cin>>i>>j;
    Number n1(i),n2(j);
    n1.Display();
    n2.Display();
    Number n3(n1);//Copy Constructor will be invoked
    n3.Display();
    Number n4=n2;//Copy Constructor will be invoked
    n4.Display();
    return 0;
}



