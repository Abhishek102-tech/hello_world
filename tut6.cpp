#include <iostream>

using namespace std;
int c=23;

int main(int argc, char const *argv[])
{
    int a,b,c;
   cout<<"Enter the value of a: "<<endl;
   cin>>a;
   cout<<"Enter the value of b: "<<endl;
   cin>>b;
   c=a+b;
   cout<<"The sum is:"<<c<<endl;
   cout<<"The global value of c is: "<<::c<<endl;
   cout<<"Is a > b: "<<(a>b) <<endl;
   cout<<"Is b> a: "<<(b>a)<<endl;
   cout<<"Is a == b:"<<(a==b)<<endl;
    return 0;
}
    