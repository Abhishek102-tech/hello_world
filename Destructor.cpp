#include <iostream>

using namespace std;
 int count =0;

class num{
    public:
    num(){
        count++;
        cout<<"This is the number of times my constructor is bein called for a new object "<<count<<endl;
    }
    ~num(){
        cout<<"This is the number of times my destructor is being called "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"This is my main block"<<endl;
    num n1;
    {
        cout<<"Entering the object block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the object block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}



