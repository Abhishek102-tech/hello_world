#include <iostream>

using namespace std;

class Distance{
    private:
      int meters;
    public:
     Distance(int d){
       meters=d;
    }
     void Display(){
        cout<<"Meters Value:"<<meters<<endl;
     }
     //prototype
     //Declaring a friend function 
     friend void AddValue(Distance &d);
};
//As AddValue is a friend of Distance it can Access its private members
void AddValue(Distance &d){
    d.meters=d.meters+5;
}


int main(){
    int dis;
    cout<<"Enter The Distance in meters"<<endl;
    cin>>dis;
    Distance gorakhpur(dis);
    gorakhpur.Display();
    //Adding 5 to dis
    AddValue(gorakhpur);
    gorakhpur.Display();
    //Displaying the final sum
    return 0;
}