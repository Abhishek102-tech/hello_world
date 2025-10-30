#include <iostream>
#include <vector>
using namespace std;

vector <int> pFact(int n){
    int factorNo = 0;
    vector <int> primeFactors;
    int k=n;
    int f =0;
    while(k!=1){
        for(int i=1;i<=k;i++){
            if(k%i==0){
                for(int j=1;j<=i;j++){
                    if(i%j==0){
                        f++;
                    }
                }
            }
            if(f==2){
                primeFactors.push_back(i);
                k=k/i;
                f=0;
            }
        }
    }
    return primeFactors;
}

int main(){
    int n;
    vector <int> primeFactors;
    cout<<"Enter the Number :";
    cin>>n;
    primeFactors = pFact(n);
    for(int i:primeFactors){
        cout<<i<<" ";
    }
    return 0;
}

