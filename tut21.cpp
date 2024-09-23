#include <iostream>

using namespace std;
class Gamer
{
    private:
    int salary,id;
    string name;
    public:
    int killstreak;
    string gamename;
    void setData(int salary,string name,int id); //Declaration
    void getData(){
        cout<<"The salary is: "<< salary<<endl;
        cout<<"The name is: "<< name<<endl;
        cout<<"The id is: "<< id<<endl;
        cout<<"The killstreak is: "<< killstreak<<endl;
        cout<<"The gamename is: "<< gamename<<endl;
        
    }
};
void Gamer::setData(int a1,string b1,int c1){
  salary=a1;
  name=b1;
  id=c1;
}

int main(){
    Gamer Abhishek;
    Abhishek.setData(5000000,"Abhishek",100892341);
    Abhishek.killstreak=67;
    Abhishek.gamename="Fortnite";
    Abhishek.getData();
    return 0;
}