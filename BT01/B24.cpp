#include <iostream>
using namespace std;
int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    y -= (14-m)/12;
    m += 12*((14-m)/12)-2;
    int temp = (d + y + y/4 - y/100 + y/400 + (31*m)/12)%7;
    switch (temp)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout <<"Saturday";
        break;
    }
    return 0;
}
