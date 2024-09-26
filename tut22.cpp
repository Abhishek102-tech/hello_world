#include <iostream>
#include <string>
using namespace std;
class Binary{
    private:
    string s;
    public:
    void read(void);
    void chk_bny(void);
    void ones_compliment(void);
    void display(void);
};
void Binary::read(void){
  cout<<"Enter the binary number"<<endl;
  cin>>s;
}
void Binary::chk_bny(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) != "0" && s.at(i) != "1"){
            cout<<"Number is Invalid";
            exit(0);
        }
    }
};
void Binary::ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) =="0"){
            s.at(i)="1";
        }
        else{
            s.at(i)="0";
        }
    }
}
void Binary::display(void){
    for(int i=0;i<s.length();i++){
        cout<<"Your number is"<<s.at(i)<<endl;
    }
}


int main(){
    
    
    return 0;
}