#include <iostream>

using namespace std;

int main(){
    int a=3;
    //Here b is a pointer which is used to store the address of a
    /*Here *-->Dereference operator
    &-->(Address of)operator*/
    int* b=&a;
    /*Here c is a pointer to pointer variable which is
     used to store the address of the pointer b*/
    int** c = &b;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value of address stored in b is "<<*b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    
    return 0;
}  