#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int mn(a[0]), mx(a[0]), sc(0),dl(0);
    for (int i=0; i<n; i++)
    {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
        if (a[i] % 2 == 0) sc = sc + a[i]; else dl++;
    }
    cout << mx << " " << mn << " " << sc << " " << dl;
    return 0;

}
