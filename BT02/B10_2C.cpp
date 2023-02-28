#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float *a = new float [1];
    cin >> a[0];
    int d(0);
    do
    {
        d++;
        cin >> a[d];
    } while (a[d] >= -273.15);
    cout << "Fahrenheit" <<setw(30)<<  "Celsius" <<setw(30)<<  "Absolute Value" << endl;
    for (int i = 0; i < d; i++)
    {

     cout <<fixed << setprecision(2)<<a[i] <<fixed << setprecision(2)<<setw(30)<< (a[i] - 32) * 5 / 9 <<setw(30)<< a[i] + 273.15 << endl;
    }
    return 0;
}

