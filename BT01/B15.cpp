#include <iostream>
using namespace std;
int main()
{
     string f0 = "a", f1 = "b";
     string fn = "";
     cout << f0 << endl << f1 << endl;
     for (int i = 2; i < 10; i++)
        {
           fn = f1 + f0;
           f0 = f1;
           f1 = fn;
           cout << fn << endl;
        }
    return 0;
}
