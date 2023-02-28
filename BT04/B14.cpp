#include <iostream>
using namespace std;
int main()
{
    int n,d;
    cin >> n;
    int a[n], b[n+1], c[101];
    for (int i = 0; i < 101; i++) c[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    for (int i = 0; i < n+1; i++)
    {
        cin >> b[i];
        if (c[b[i]] == 0) d = b[i];
    }
    cout << d;
    return 0;
}
