#include <iostream>
#include <vector>
/*To print missing number in an array*/
using namespace std;
class Solution
{
public:
    // Note that the size of the array is n-1
    int missingNumber(int n, std::vector<int> &arr)
    {
        int i, sum=0;
        int tsum=(n*(n+1))/2;
        for (i = 0; i < n-1; i++)
        {
            sum=sum+arr[i];
        }
        return tsum-sum;
    }
    // Your code goes here
}

;

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends