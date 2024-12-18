#include <iostream>
using namespace std;
int main(){
    int n,i,highest;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    highest = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
    }
    cout<<"The highest element is : "<<highest;
}