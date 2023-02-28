#include <iostream>
using namespace std;
int main()
{
    int n, d(0), s;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) a[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[s]++;
        if (a[s] >= 2) d++;
    }
    if (d != 0) cout << "Yes"; else cout << "No";
    return 0;
}
