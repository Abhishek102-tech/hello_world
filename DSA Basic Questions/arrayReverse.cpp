#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String \n";
    cin>>s;
    int l = s.length();
    char str[l+1];
    char c;
    for(int i=0;i<l;i++){
        c=s[(l-1)-i];
        str[i]=c;
    }
    str[l] = '\0';
    cout<<"The resultant string is : "<<str;
}