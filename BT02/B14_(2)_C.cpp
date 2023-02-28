#include <iostream>
using namespace std;
int main()
{
    double mn, mx, s, n;
    cin >>  n >> s;
    mn = s;
    mx = s;
    for (int i = 1; i < n; i++)
    {
        cin >> s;
        if (s > mx) mx = s;
        if (s < mn) mn = s;
    }
    cout << mn << ' ' << mx;
    return 0;

}
