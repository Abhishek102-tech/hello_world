//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int find(int N)
    {
        int i, j, m, n, k;
        int digits[5];
        for (i = N; i <= 0; i--)
        {
            m = i;
            j = 0;
            do
            {
                digits[j] = m % 10;
                m = m / 10;
                j++;
            } while (m != 0);
            for (n = 0; n < j - 1; n++)
            {
                if (digits[n] >= digits[n + 1])
                {
                    k = 1;
                }
                else
                {
                    k = 0;
                }
            }
            // if (k == 1)
            // {
            //     return i;
            //     break;
            // }
        }
    }
    // code here
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0;
}
// } Driver Code Ends