#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float s, a, b, c;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    cout << fixed << setprecision(2) << sqrt(s*(s-a)*(s-b)*(s-c));
    return 0;

}
