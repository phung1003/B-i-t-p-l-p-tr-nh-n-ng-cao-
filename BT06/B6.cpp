#include <iostream>
using namespace std;
void hoanvi(int n)
{
    int a[n][n];
    int ln = 1;
    for (int j = 0; j < n; j++)
    {
        a[ln][j] = ln;
        if (ln + 2 > n - 1) ln = 0; else ln = ln + 2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    hoanvi(n);
    return 0;
}
