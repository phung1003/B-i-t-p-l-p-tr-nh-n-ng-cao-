#include <iostream>
#include <string>
using namespace std;
int main()
{
    int m, n, d(0), ln(0), col(0);
    cin >> m >> n;
    string s;
    char a[m][n], t;
    getline(std::cin, s);
    for (int i = 0; i < m; i++)
    {
        col = 0;
        getline(std::cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] != ' ')
            {
                a[i][col] = s[j];
                col++;
            }
        }

    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != '*')
            {
                if (i != 0 && j != 0) if (a[i-1][j-1] == '*') d++;
                if (i != 0) if (a[i-1][j] == '*') d++;
                if (i != 0 && j != n-1) if (a[i-1][j+1] == '*') d++;
                if (j != 0) if (a[i][j-1] == '*') d++;
                if (j != n - 1) if (a[i][j+1] == '*') d++;
                if (i != m - 1 && j != 0) if (a[i+1][j-1] == '*') d++;
                if (i != m - 1) if (a[i+1][j] == '*') d++;
                if (i != m - 1 && j != n - 1)if (a[i+1][j+1] == '*') d++;
                a[i][j] =  d + 48;
                d = 0;
             }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
