#include <iostream>
using namespace std;
void qsort(int l, int h, float a[])
{
    int i = l;
    int j = h;
    int x = a[(l+h)/2];
    do
    {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j)
        {
            float t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    } while (i <= j);
    if (l < j) qsort(l, j, a);
    if (i < h) qsort(i, h, a);
}
int main()
{
    int n;
    cin >> n;
    float m[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i] >> f[i];
    }
    qsort(0, n-1, m);
    qsort(0, n-1, f);
    int i(n), j(n);
    while (i != 0 && j != 0)
    {
        if (m[i-1] > f[j-1])
        {
            i--;
        } else j--;
    }
    if (j == 0 && i !=0) cout << "No"; else cout << "Yes";
    return 0;
}
