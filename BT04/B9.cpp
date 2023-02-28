#include <iostream>
using namespace std;
string check(int a[][10000], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                for (int x = 0; x < n; x++) if (x != i && a[x][j] == 1) return "Yes";
                for (int x = 0; x < n; x++) if (x != j && a[i][x] == 1) return "Yes";
                int ln = i+1, col = j+1;
                while (ln < n && col < n)
                {
                    if (a[ln][col] == 1) return "Yes";
                    ln++;
                    col++;
                }
                ln = i-1; col = j - 1;
                while (ln >= 0 && col >= 0)
                {
                    if (a[ln][col] == 1) return "Yes";
                    ln--;
                    col--;
                }
                ln = i - 1; col = j + 1;
                while (ln >= 0 && col < n)
                {
                    if (a[ln][col] == 1) return "Yes";
                    ln--;
                    col++;
                }
                ln = i + 1; col = j - 1;
                while (ln < n && col >= 0)
                {
                     if (a[ln][col] == 1) return "Yes";
                    ln++;
                    col--;
                }
            }
        }
    }
    return "No";

}
int main()
{
    int n;
    cin >> n;
    int a[n][10000], temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        a[temp1][temp2] = 1;
    }
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << check(a,n);
    return 0;
}
