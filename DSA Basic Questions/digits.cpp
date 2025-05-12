#include <iostream>

using namespace std;

class digits{
    int count=0;

    public:
    int count_digits(char a[]){
        for(int i=0;a[i]!='\0';i++){
            if (a[i]>='0' && a[i]<='9'){
                count++;
            }
        }
    return count;
    }
};

int main(){
    char a[30];
    cout<<"Enter the string: \n";
    cin>>a;
    digits d;
    int result=d.count_digits(a);
    cout<<"The number of digits in the string is "<<result<<endl;
    return 0;
}