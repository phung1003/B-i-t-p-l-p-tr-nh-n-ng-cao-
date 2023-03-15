#include <iostream>
using namespace std;

int f(int* a)
{
    return sizeof(a);
}

int main()
{
    int a[10] ;
    for (int i =0; i<9;i++) a[i] = i+1;
    cout << sizeof(a) / sizeof(a[0]) << endl;
    cout << f(a);
    return 0;

}
