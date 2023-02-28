#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f1 = 0, f2 = 1, fn ;
    cout << f1 << ' ' << f2 << ' ' ;
    while (fn < n)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        cout << fn << ' ';
    }
    cout << endl;
    cout << (fn == n);
    return 0;

}
