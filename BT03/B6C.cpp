#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) a[i][j] = 0;
    }
    a[0][n/2] = 1;
    int dem = 2, ln1(0), col1(n/2), ln2(0), col2(n/2);
    while (dem <= n*n)
    {
        if (ln1 == 0) ln1 = n - 1; else ln1 = ln1 - 1;
        if (col1 == n - 1) col1 = 0; else col1 = col1 + 1;
        if (a[ln1][col1] == 0)
        {
            a[ln1][col1] = dem;
            ln2 = ln1;
            col2= col1;
        }
        else
        {
            ln2++;
            a[ln2][col2] = dem;
            ln1 = ln2;
            col1 = col2;
        }

        dem++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
