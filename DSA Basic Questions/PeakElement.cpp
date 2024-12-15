#include <iostream>
using namespace std;
int main()
{
    int n, peakValue, peakIndex;
    string b = "false";
    cout << "Enter the the number of elemnets in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            peakValue = arr[i];
            b = "true";
            peakIndex = i;
            // cout << "Peak Value, Index: ";
            // cout << peakIndex << endl;
            // cout << peakValue << endl;
             cout << "Peak Value = " << peakValue << endl;
             cout << "Peak Index = " << peakIndex << endl;
        }
    }
    cout << b;
    return 0;
}