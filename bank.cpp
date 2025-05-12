#include <iostream>

using namespace std;
int balance;

class Bank{
    
    int amount;

    public:
    int Deposit(){
        cout<<"Enter the amount you want to deposit: \n";
        cin>>amount;
        balance=balance+amount;
        cout<<"Your balance is "<<balance<<endl;
        cout<<"Amount of "<<amount<<" deposited"<<endl;
        return 0;
    }

    int Withdraw(){
        cout<<"Enter the amount you want to withdraw: \n";
        cin>>amount;
        if(balance>=amount){
            balance=balance-amount;
            cout<<"Your balance is "<<balance<<endl;
            cout<<"Amount of "<<amount<<" withdrawn"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
        return 0;
    }
    int checkBalance(){
        cout<<"Your balance is "<<balance<<endl;
        return 0;
    }
};

int main(){
    cout<<"Welcome to the bank"<<endl;
    cout<<"Enter your current balance \n";
    cin>>balance;
    Bank a;
    cout<<"Enter 1 to deposit, 2 to withdraw, 3 to check balance: \n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            a.Deposit();
            break;
        case 2:
            a.Withdraw();
            break;
        case 3:
            a.checkBalance();
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}