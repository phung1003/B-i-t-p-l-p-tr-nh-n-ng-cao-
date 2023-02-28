#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int a[9];
    for (int i = 0; i <= 9; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
         cin >> temp;
         a[temp]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << i <<": " << a[i] << endl;
    }
    return 0;
}
