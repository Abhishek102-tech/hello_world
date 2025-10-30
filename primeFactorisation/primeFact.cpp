#include <iostream>
#include <vector>
using namespace std;

vector<int> pFact(int n) {
    vector<int> primeFactors;

    for (int i = 2; i * i <= n; i++) {   
        while (n % i == 0) {             
            primeFactors.push_back(i);   
            n /= i;                      
        }
    }

    if (n > 1)
        primeFactors.push_back(n);

    return primeFactors;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    vector<int> primeFactors = pFact(n);

    cout << "Prime factorization of " << n << " is: ";
    for (int i : primeFactors) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
