#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    double avg(0), n;
    do
    {
        cout << "Diem mon hoc " << i << ": ";
        cin >> n;
        while (n > 10)
        {
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): ";
            cin >> n;
        }
        avg = avg + n;
        i++;
    } while (n >= 0);
    cout << "Diem trung binh cua " << i - 2 << " mon hoc: " << avg / (i-2);
    return 0;
}
