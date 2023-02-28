#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> x >> y;
    while (y != 0)
    {
        t = x % y;
        x = y;
        y = t;
    }
    cout << x;
    return 0;
}
