#include <iostream>

using namespace std;
void qsort(int l, int h, int a[])
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
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    } while (i <= j);
    if (l < j) qsort(l, j, a);
    if (i < h) qsort(i, h, a);
}

bool search(int n, int l, int h, int a[])
{
    while (l <= h)
    {
        int mid = (l+h) / 2;
        if (a[mid] == n) return 1;
        if (a[mid] < n) l = mid + 1; else h = mid -1;
    }
    return 0;
}

void pr(int a[], int n)
{
   for (int i = 0; i < n - 2; i++)
    {
        for (int j = i+1; j < n - 1; j++)
        {
            if (search(-a[i] - a[j], j+1, n - 1, a))
            {
                cout << a[i] << " " << a[j] << " " << -a[i] - a[j];
                return;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qsort(0,n-1, a);
    pr(a,n);
    return 0;
}
