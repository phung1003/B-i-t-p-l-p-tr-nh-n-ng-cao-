#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int r(0), t(0);
    while (r <= 70 && t <= 70)
    {
        int n = rand() % 100 + 1;
        if (n >= 1 && n <= 50)
        {
            r = r + 3;
            cout << "Rua tien dai" << "\t" << "Vi tri rua: " << r << endl;
        }
        else if (n > 50 && n <= 80)
        {
            r = r + 1;
            cout << "Rua tien ngan" << "\t" << "Vi tri rua: " << r << endl;
        }
        else if (n > 80)
        {
            if (r < 6) r = 0; else r = r - 6;
            cout << "Rua truot" << "\t" << "Vi tri rua: " << r << endl;
        }
        if (r >= 70)
        {
            cout << "Rua thang";
            break;
        }
        n = rand() % 100 + 1;
        if (n <= 20)
        {
            cout << "Tho ngu     " << "\t" << "Vi tri tho: " << t << endl;
        }
        else if (n > 20 && n <= 40)
        {
            t = t + 9;
            cout << "Tho tien dai" << "\t" << "Vi tri tho: " << t << endl;
        }
        else if (n > 40 && n <= 50)
        {
            if (t < 12) t = 0; else t = t - 12;
            cout << "Tho truot dai" << "\t" << "Vi tri tho: " << t << endl;
        }
        else if (n > 50 && n <= 80)
        {
            t = t + 1;
            cout << "Tho tien ngan" << "\t" << "Vi tri tho: " << t << endl;
        }
        else if (n > 80)
        {
            if (t < 2) t = 0; else t = t - 2;
            cout << "Tho truot ngan" << "\t" << "Vi tri tho: " << t << endl;
        }
        if (t >= 70)
        {
            cout << "Tho thang";
            break;
        }
    }
    return 0;
}
