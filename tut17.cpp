#include <iostream>

using namespace std;

//made this fuction inline  due to the repetition 
//and the small size of the fuction
// inline int prod(int a,int b){
//    return a*b;
//}

int prod(int a,int b){
    /*Here c is a static variable which means it is not
    initialized everytime the fuction runs but it retains its value everytime*/
    static int c=0;
    //the retained value of c is updated by 1
    //everytime the program runs
    c=c+1;
    return a*b+c;
}


int main(){
    int x,y;
    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl;
    cout<<"The product is: "<<prod(x,y)<<endl; 
    return 0;
}