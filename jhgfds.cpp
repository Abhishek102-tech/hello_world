//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int find(int N)
    {
        int num, last_digit, toBreak = 1;
        for(int x = N - 1; x > 0; x--) {
            int num = x, last_digit;
            while(num > 0) {
                if(last_digit < num % 10) {
                    toBreak = 0;
                    break;
                }
                num /= 10;
            }
            if(toBreak == 1) {
                return x;
            }
        }
        // int i , j ,m,n,k;
        // int digits[6];
        // for (i=N;i<=0;i++){
        //     m=i;
        //     j=1;
        //  do{
            
        //     digits[j]=m%10;
        //     m=m/10;
        //     j++;
        //  }
        //  while(m!=0);
        //  for(n=1;n<=j-2;n++){
        //     if(digits[n]>=digits[n+1]){
        //         k=1;
        //     }
        //     else{
        //         k=0;
        //     }

        //  }
        //  if(k==1)
        //     return i;
        //     break;
         
        // }
        // }
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