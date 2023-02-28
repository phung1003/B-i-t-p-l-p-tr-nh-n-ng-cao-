#include <iostream>
using namespace std;
int main()
{
    double temp, avg(0);
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        avg = avg + temp / 5;
    }
    cout << avg;
    return 0;
}
