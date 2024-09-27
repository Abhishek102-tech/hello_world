//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        int i,j,max[k],greatest;
        std::vector<int> output;
        for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            for(j=0;j<k;j++){
                max[j]=arr[j];
            }
            greatest=max[0];
            for(j=0;j<k;j++){
                if(greatest>=max[j]){
                    continue;
                }
                else{
                    greatest=max[j];
                }
                
            }
           output[i]=greatest; 
        }
        return output;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends