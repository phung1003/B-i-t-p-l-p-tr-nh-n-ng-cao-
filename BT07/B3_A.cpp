#include <iostream>
using namespace std;
int count_even(int* a, int n)
{
    int d(0);
    for (int i = 0; i < n; i++)
        if (*(a+i) % 2 == 0) d++;
    return (d);
}

int main()
{
    int *a = new int [10];
    for (int i = 0; i < 10; i++) a[i] = i+1;
    cout << count_even(a, 5) << endl;
    cout << count_even(a+5,5);
    return 0;
}
