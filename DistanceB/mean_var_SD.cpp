#include <iostream>

using namespace std;

class all
{
    float sum = 0;
    int count = 0;
    float mn = 0;
    float vr = 0;
    float S = 0;

public:
    float mean(int lst[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            sum += lst[i];
        }
        mn = sum / n;
        return mn;
    }
    float var(int lst[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            vr += ((lst[i] - mn) * (lst[i] - mn));
        }
        vr = vr / n;
        return vr;
    }
    float Sd(int lst[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            S += ((lst[i] - mn) * (lst[i] - mn));
        }
        S = S / n;
        return S;
    }
};

int n;
int main()
{
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int lst[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> lst[i];
    }
    all a;
    float mean = a.mean(lst, n);
    float var = a.var(lst, n);
    float Sd = a.Sd(lst, n);
    cout << "The mean is " << mean << endl;
    cout << "The variance is " << var << endl;
    cout << "The standard deviation is " << Sd << endl;
    return 0;
}
