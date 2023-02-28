#include <iostream>
#include <string>
using namespace std;

string chuyen(int n)
{
    string s = "";
    while (n > 0)
    {
        s = (char)(n % 10 + 48) + s;
        n = n / 10;
    }
    return s;
}
bool check(int m)
{
    string s = chuyen(m);
    int n = s.length();
    for (int i = 0; i < n; i++ )
    {
        if (s[i] != s[n-i-1]) return 0;
    }
    return 1;

}
int main()
{
    int n, s, t;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int d = 0;
        cin >> s >> t;
        for (int i = s; i <= t; i++)
        {
            if (check(i)) d++;
        }
        cout << d << endl;
    }
    return 0;
}
