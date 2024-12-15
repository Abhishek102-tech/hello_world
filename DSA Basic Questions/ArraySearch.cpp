#include <iostream>
using namespace std;
int main(){
    int n,index=-1,value;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched in the array"<<endl;
    cin>>value;
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            index=i;
            cout<<"Element found at index :";
            break;
        }
    }
    cout<<index;
}