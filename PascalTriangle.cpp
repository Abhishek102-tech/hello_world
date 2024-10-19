#include <iostream>
using namespace std;
int employee(string name,double salary,int years){
    cout<<"Hello "<<name<<endl;
    cout<<"Your annual stipend will be "<<salary<<" and your contract ends in "<<years<<endl;
};
class contribution{
    private:
    double salary;
    string name; 
    public:
    int (int a){}
    
};

int main(){
    string n;
    double s;
    int y;
    cout<<"Enter your name,salary and time period for the contract"<<endl;
    cin>>n;
    cin>>s>>y;
    employee(n,s,y);
}