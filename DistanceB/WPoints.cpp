#include <iostream>
#include <math.h>
using namespace std;

class Pointers2;

class Pointers1{
    friend void Distance(Pointers1 o1,Pointers2 o2);
    int x1,y1;
    public:
    void SetData(){
       
    cout<<"Enter the x value"<<endl;
    cin>>x1;
    cout<<"Enter the y value"<<endl;
    cin>>y1;
    }
    void Display(){
        cout<<"The value of x is "<<x1<<" and the value of y is "<<y1<<endl;
    }
};

class Pointers2{
    friend void Distance(Pointers1 o1,Pointers2 o2);
    int x2,y2;
    public:
    void SetData(){
    cout<<"Enter the x value"<<endl;
    cin>>x2;
    cout<<"Enter the y value"<<endl;
    cin>>y2;
    }
    void Display(){
        cout<<"The value of x is "<<x2<<" and the value of y is "<<y2<<endl;
    }
};



void Distance(Pointers1 o1,Pointers2 o2){
    double res=std::sqrt(((o1.x1-o2.x2)*(o1.x1-o2.x2))+((o1.y1-o2.y2)*(o1.y1-o2.y2)));
    cout<<"The distance between these two points is: "<<res<<endl;
}


int main(){
    Pointers1 m;
    m.SetData();
    m.Display();
    Pointers2 n;
    n.SetData();
    n.Display();
    Distance(m,n);
    return 0;
}