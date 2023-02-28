#include <iostream>
#include <iomanip>

using namespace std;
class HS
{
public:
    int stt;
    double toan;
    double ly;
    double anh;
    double TB()
    {
        double n;
        n = toan + ly + anh;
        return n/3;
    }
};

int main()
{
    int n;
    cin >> n;
    HS a[n];
    cout <<fixed <<setprecision(2);
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        cin >> a[i].toan >> a[i].ly >> a[i].anh;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].toan < a[j].toan)
            {
                HS temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Toan:" << endl;
    cout <<"          "<< setw(20) << "Toan" << setw(20) << "Ly" << setw(20) << "Anh" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien " << a[i].stt << setw(20) << a[i].toan << setw(20) << a[i].ly << setw(20) << a[i].anh << endl;
    }


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].ly < a[j].ly)
            {
                HS temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Ly:" << endl;
    cout <<"          "<< setw(20) << "Toan" << setw(20) << "Ly" << setw(20) << "Anh" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien " << a[i].stt << setw(20) << a[i].toan << setw(20) << a[i].ly << setw(20) << a[i].anh << endl;
    }


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].TB() < a[j].TB())
            {
                HS temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "TB:" << endl;
    cout <<"          "<< setw(20)<< "TB" <<setw(20) << "Toan" << setw(20) << "Ly" << setw(20) << "Anh" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien " << a[i].stt << setw(20) << a[i].TB() << setw(20)<< a[i].toan << setw(20) << a[i].ly << setw(20) << a[i].anh << endl;
    }
    return 0;
}
