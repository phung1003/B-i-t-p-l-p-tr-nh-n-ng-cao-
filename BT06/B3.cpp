#include <iostream>
using namespace std;

void Tohop(int i, int k, int n, char x[], int c)
{
    for (int j = c; j <= 97 + n; j++)
    {
            x[i] = char (j);
            c = j+1;
            if (i == k)
            {
                for (int t = 0; t <= k; t++) cout << x[t];
                cout << endl;
            }
            else Tohop(i+1,k,n,x,c);
    }
    return;
}


int main()
{
    int n, k, c = 97;

    cin >> n >> k;
    char x[k];
    Tohop(0, k - 1, n, x, c);
    return 0;
}

