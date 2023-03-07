#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int mine(int a[][10000], int i, int j, int m, int n)
{
    int d(0);
                if (i != 0 && j != 0) if (a[i-1][j-1] == -1) d++;
                if (i != 0) if (a[i-1][j] == -1) d++;
                if (i != 0 && j != n-1) if (a[i-1][j+1] == -1) d++;
                if (j != 0) if (a[i][j-1] == -1) d++;
                if (j != n - 1) if (a[i][j+1] == -1) d++;
                if (i != m - 1 && j != 0) if (a[i+1][j-1] == -1) d++;
                if (i != m - 1) if (a[i+1][j] == -1) d++;
                if (i != m - 1 && j != n - 1)if (a[i+1][j+1] == -1) d++;
                return d;

}
int check(int x, int y, int a[][10000], int m, int n)
{
    if (a[x][y] == -2)
    {
        a[x][y] = mine(a, x, y, m, n);
        return 1;
    }
    else
    {
        cout << "DEAD" << endl;
        return 0;
    }

}

void random(int a[][10000], int m, int n, int k)
{
      for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {

           if (rand() % 2 == 0)
           {
               a[i][j] = -1;
               k--;
               if (k == 0) return;
           }
       }
    }
}


int main()
{
    srand(time(0));
    int n, m, k;
    cin >> m >> n >> k;
    int a[m][10000];
    int d = m*n - k;

    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {

           a[i][j] = -2;
       }

    }
    random(a, m , n, k);
    int t = 1;
    while (t != 0 && d > 0)
    {
        int x, y;
        cin >> x >> y;
        t = check(x, y, a, m, n);
        d--;
        if (t != 0)
        {
         for (int i = 0; i < m; i++)
         {
            for (int j = 0; j < n; j++)
         {

              if (a[i][j] == -1) cout << -2 << " "; else cout << a[i][j] <<" " ;
         }
         cout << endl;
         }
        }
        else
        {

         for (int i = 0; i < m; i++)
         {
            for (int j = 0; j < n; j++)
         {

              cout << a[i][j] <<" " ;
         }
         cout << endl;
         }
        }
    }
    return 0;

}
