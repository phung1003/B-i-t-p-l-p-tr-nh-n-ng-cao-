#include <iostream>
using namespace std;
int factor(int n)
{
    int kq = 1;
    for (int i = 2; i <= n; i++) kq = kq * i;
    return kq;
}
int toHop(int k, int n)
{
    return factor(n)/(factor(k) * factor(k-n));
}

int kiemTra(int k, int n)
{
    return (0 <= k && k <= n && 1 <= n && n <= 20);
}

void nhapKN(int k[], int n[], int &soPhantu)
{
    soPhantu = -1;
    do
    {
        soPhantu++;
        cin >> k[soPhantu] >> n[soPhantu];
    } while (k[soPhantu] != -1 && n[soPhantu] != -1);
}
int main()
{
    int* k = new int [1];
    int* n = new int [1];
    int soPhantu;
    nhapKN(k, n, soPhantu);
    for (int i = 0; i < soPhantu; i++)
    {
        if (kiemTra(*(k+i), *(n+i))) cout << toHop(*(k+i), *(n+i));
        else cout << 0;
        cout << endl;
    }
    return 0;
}
