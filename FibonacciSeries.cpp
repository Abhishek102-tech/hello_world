#include <iostream>

using namespace std;
int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
    }


int main(){
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;
    cout<<"The Fibonacci series upto no. is:"<<endl<<fibonacci(i);
    return 0;
}