#include <iostream>
#include <iomanip>
using namespace std;
void xoan(int lnst, int lnend, int colst, int colend, int a[][10],int pt, int moc)
{
    if (pt > moc)  return;
    for (int i = colst; i <= colend; i++)
    {
        a[lnst][i] = pt;
        pt = pt+1;
    }
    if (pt > moc)  return;
    for (int i = lnst+1; i <= lnend; i++)
    {
        a[i][colend] = pt;
        pt = pt + 1;
    }
    if (pt > moc)  return;
    for (int i = colend - 1; i >= colst; i--)
    {
        a[lnend][i] = pt;
        pt++;
    }
    if (pt > moc)  return;
    for (int i = lnend -1; i > lnst; i--)
    {
        a[i][colst] = pt;
        pt++;
    }
    if (pt > moc)  return;
    xoan(lnst+1, lnend-1, colst+1, colend -1, a, pt, moc);

}

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][10];
    xoan(0, m-1, 0, n-1, a, 1, m*n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<setw(3) << a[i][j] ;
        }
        cout << endl;
    }
    return 0;
}
