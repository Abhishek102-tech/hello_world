#include <iostream>

using namespace std;

int main(){
    int marks[6];
    int i,j=0,k=0;
    for(i=0;i<=5;i++){
    cout<<"Enter the marks in the subject: "<<endl;
    cin>>marks[i];
    
    }
    //pointers in arrays
    int* p= marks;
    cout<<"The value of marks[0] is: "<<*p<<endl;
    cout<<"The value of marks[1] is: "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is: "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is: "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is: "<<*(p+4)<<endl;
    cout<<"The value of marks[5] is: "<<*(p+5)<<endl;
    return 0;
}