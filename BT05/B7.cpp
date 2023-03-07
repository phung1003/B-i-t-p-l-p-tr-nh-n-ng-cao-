#include <iostream>
#include <cmath>
using namespace std;
void draw(int m, int n)
{
    for (int i = -m; i <=m; i++)
    {
        if (abs(i) <= n - 1) cout <<'*'; else cout << ' ';
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        draw(n,i);
        cout<<endl;
    }
    return 0;
}
