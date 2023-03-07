#include <iostream>
using namespace std;

void Chinhhop(int i, int k, int n, char x[], int c[])
{
    for (int j = 97; j <= 97 + n; j++)
    {
        if (c[j - 97] == 0)
        {
            x[i] = char (j);
            c[j - 97] = 1;
            if (i == k)
            {
                for (int t = 0; t <= k; t++) cout << x[t];
                cout << endl;
            }
            else Chinhhop(i+1,k,n,x,c);
            c[j - 97] = 0;
        }
    }
    return;
}


int main()
{
    int n, k, c[26];
    for (int i = 0; i < 26; i++) c[i] = 0;
    cin >> n >> k;
    char x[k];
    Chinhhop(0, k - 1, n, x, c);
    return 0;
}
