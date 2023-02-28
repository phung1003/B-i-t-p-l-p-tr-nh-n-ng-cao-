#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap tu 0..9:";
    cin >> n;
    while (0 <= n && n <= 9)
    {
        cout << "Vua nhap chu so ";
        switch (n)
        {
        case 0:
            cout << "khong" << endl;
            break;
        case 1:
            cout << "mot" << endl;
            break;
        case 2:
            cout << "hai" << endl;
            break;
        case 3:
            cout << "ba" << endl;
            break;
        case 4:
            cout << "bon" << endl;
            break;
        case 5:
            cout << "nam" << endl;
            break;
        case 6:
            cout << "sau" << endl;
            break;
        case 7:
            cout << "bay" << endl;
            break;
        case 8:
            cout << "tam" << endl;
            break;
        case 9:
            cout << "chin" << endl;
            break;
        }
        cout << "Nhap tu 0..9:";
        cin >> n;
    }
    return 0;
}
