#include <iostream>

using namespace std;
int main(){
    char name[30];
    cout<<"Emter your Name: \n";
    cin>>name;
    int count=0;
    for (int i=0;name[i]!='\0';i++){
        if (name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='i'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            count++;
        }
        
    }
    cout<<count;
 }