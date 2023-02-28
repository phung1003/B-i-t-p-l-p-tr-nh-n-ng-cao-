#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    double o(0), avg(0);
    for (int i = 0; i<n; i++)
    {
        avg = avg + a[i];
    }
    avg = avg / n;
    for (int i = 0; i<n; i++)
    {
        o = (a[i] - avg)*(a[i] - avg) + o;
    }
    o = o/n;
    cout << avg <<' '<<o;
    return 0;
}
