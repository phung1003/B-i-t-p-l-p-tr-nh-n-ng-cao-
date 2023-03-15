#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()
{
    srand(time(0));
    int p1(0), p2(0);
    while (p1 <= 100 && p2 <= 100)
    {
        int n = rand() % 6 + 1;
        cout << "xuc xac nguoi choi 1:" << n << "\t" << "tong diem nguoi choi 1:" << p1 + n << endl;
        p1 = p1 + n;
        if (p1 >= 100)
        {
            cout << "Nguoi choi 1 thang";
            break;
        }
        n = rand() % 6 + 1;
        cout << "xuc xac nguoi choi 2:" << n << "\t" << "tong diem nguoi choi 2:" << p2 + n << endl;
        p2 = p2 + n;
        if (p2 >= 100)
        {
            cout << "Nguoi choi 2 thang";
            break;
        }
    }
    return 0;

}
