#include <iostream>
using namespace std;
int main()
{
    int n, j, d;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        j = i;
        d = 0;
        while (d < n)
        {

            cout << j << " ";
            j++;
            if (j > n) j = 1;

            d++;
        }
        cout << endl;
    }
    return 0;
}
