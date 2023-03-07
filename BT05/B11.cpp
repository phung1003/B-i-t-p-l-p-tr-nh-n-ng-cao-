#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string db(int n)
{
    string s;
    while (n != 0)
    {
        s = (char)(n % 2 + 48) + s;
        n = n / 2;
    }
    return s;
}

int bd(string s)
{
    int n = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        n = n + pow(2,s.length() - i - 1)*(s[i] - 48);
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << db(n) << endl;
    string s;
    cin >> s;
    cout << bd(s);
    return 0;
}
