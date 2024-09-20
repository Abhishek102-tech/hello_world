#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, k = 10, l, m, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= (n - (i + 1)); j++)
        {
            cout << " ";
        }
        l = ceil(pow(11, i));
        for (j = 0; j <= i; j++)
        {
            m = l % 10;
            cout << m << " ";
            l = l / 10;
        }
        cout << endl;
    }

    return 0;
}