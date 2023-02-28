#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    do
    {
        if (n >= 0 && n % 5 == 0) cout << n/5 << endl; else cout << -1 << endl;
        cin >> n;
    } while (n != -1);
    cout << "Bye";
    return 0;
}
