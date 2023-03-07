#include <iostream>
#include <cmath>
using namespace std;

bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    cout << check(n);
}
