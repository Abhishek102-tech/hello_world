#include <iostream>

using namespace std;
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}

int main(){
    int k;
    cout<<"Enter A Number"<<endl;
    cin>> k;
    cout<<"Factorial of Number is: "<<factorial(k);
    return 0;
}