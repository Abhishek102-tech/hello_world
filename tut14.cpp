#include <iostream>

using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    double salary;
}  ep;
union money
{
    int rice;
    char car;
    double pounds;
};


int main(){
   enum food{breakfast,lunch,dinner};
  // cout<<breakfast;
   
   
    
    ep harry;
    ep shubham;
    harry.eId = 1;
    harry.favchar='c';
    harry.salary=1200000;
    shubham.eId = 2;
    shubham.favchar = 'm';
    shubham.salary = 1400000;
    cout<<"the value is "<<harry.eId<<endl; 
    cout<<"the value is "<<harry.favchar<<endl; 
    cout<<"the value is "<<harry.salary<<endl;
    cout<<"the value is "<<shubham.eId<<endl; 
    cout<<"the value is "<<shubham.favchar<<endl; 
    cout<<"the value is "<<shubham.salary<<endl;   
    
    return 0;
}