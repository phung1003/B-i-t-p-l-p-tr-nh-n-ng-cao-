#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mn, mx, step;
    cin >> mn >> mx >> step;
    cout << "Fahrenheit" <<setw(30)<<  "Celsius" <<setw(30)<<  "Absolute Value" << endl;
    for (int i = mn; i <= mx; i+=step)
    {

     cout <<fixed << setprecision(2)<<i <<fixed << setprecision(2)<<setw(30)<< (i - 32) * 5 / 9 <<setw(30)<< i + 273.15 << endl;
    }
    return 0;
}


