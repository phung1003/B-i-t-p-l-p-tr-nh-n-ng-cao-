#include <iostream>
#include <string>
using namespace std;

bool check(string s)
{
    int n = s.length();
    for (int i = 0; i < n; i++ )
    {
        if (s[i] != s[n-i-1]) return 0;
    }
    return 1;

}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (check(s)) cout << "Yes"; else cout <<"No";
    return 0;
}
