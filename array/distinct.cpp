#include <iostream>
using namespace std;

int countUnique(int n, int arr[]) {
    int uniqueCount = 0;         
    int uniqueArr[1000];          
    
    for (int i = 0; i < n; i++) {
        bool found = false;
        
        
        for (int j = 0; j < uniqueCount; j++) {
            if (uniqueArr[j] == arr[i]) {
                found = true;
                break;
            }
        }

        
        if (!found) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    
    return uniqueCount;
}

int main() {
    int n;
    cout << "Enter number of elements in array:\n";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Invalid size!\n";
        return 1;
    }

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = countUnique(n, arr);
    cout << "Number of unique elements: " << ans << endl;
    return 0;
}
