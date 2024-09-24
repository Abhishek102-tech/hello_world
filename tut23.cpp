#include <iostream>

using namespace std;
class shop
{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void setcounter(void) {counter=1;}
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void){
    cout<<"Enter id No. of your material:"<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your material"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for(int i=1;i<counter;i++){
    cout<<"The Price of your item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukaan;
    dukaan.setcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}