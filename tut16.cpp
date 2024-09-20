#include <iostream>

using namespace std;

//This is call by reference by using pointers
/* if I didn't use the * operator the swap would have just swapped the value
formal variables which has nothing to do with the actual variables*/
//t *a,int *b){
//=*a;
//
// *b = temp;
//
//}

//Calling by reference using C++ reference variables
void swapbyrefvar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
} 
int main(){
    int x=4,y=5;
    cout<<"The value of x is: "<<x<<"\tThe value of y is: "<<y<<endl;
    swapbyrefvar(x,y);/*Here I gave the address of x and y to the swap fuction
    instead of giving the actual values */
    cout<<"The value of x is: "<<x<<"\tThe value of y is: "<<y<<endl;
    return 0;
}