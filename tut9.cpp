#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your Age:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are a child";
        cout<<"Go and play at home";
    }
    return 0;
}