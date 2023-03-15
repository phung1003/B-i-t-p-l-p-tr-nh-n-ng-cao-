#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void roll(int i, int &p)
{
        int n = rand() % 6 + 1;
        p = p + n;
        cout << "xuc xac nguoi choi "
             << i << ":" << n << "\t"
             << "tong diem nguoi choi " << i << ":" << p << endl;

        if (p >= 100)
        {
            cout << "Nguoi choi "<< i <<" thang";
        }

}


int main()
{
    srand(time(0));
    int p1(0), p2(0);
    while (p1 <= 100 && p2 <= 100)
    {
        if (p1 <= p2)
        {
            roll(1, p1);
        }
        else roll(2,p2);
    }
    return 0;

}

