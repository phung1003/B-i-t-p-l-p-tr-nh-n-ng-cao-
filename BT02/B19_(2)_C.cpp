#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Tong so mon hoc can tinh: ";
    cin >> n;
    float avg(0), ths(0);
    for (int i = 1; i <= n; i++)
    {
        float diem, heso;
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem;
        cout << "He so mon hoc " << i << ": ";
        cin >> heso;
        avg = avg + diem * heso;
        ths = ths + heso;
    }
    cout << "Tong so he so: " << ths << endl;
    cout << "Diem trung binh cua " << n << ": " << avg / ths;
    return 0;
}
