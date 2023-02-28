#include <iostream>
using namespace std;
int main()
{
    int n, s = -1;
    cin >> n;
    do
    {
        if (n != s) cout << n <<" ";
        s = n;
        cin >> n;
    } while (n >= 0);
    return 0;
}
