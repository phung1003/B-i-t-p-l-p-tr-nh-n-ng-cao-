#include <iostream>
using namespace std;
int UCLN(int x, int y)
{
    int t;
    while (y != 0)
    {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x / UCLN(x,y) << "/" << y / UCLN(x,y);
    return 0;
}
