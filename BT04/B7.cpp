#include <iostream>
#include <string>
using namespace std;
void Lap(int i, int k, int n, char *x, string s)
{
    for (int j = 0; j < n; j++)
    {
        x[i] = s[j];
        if (i == k-1)
        {
        for (int m = 0; m < k; m++)
        {
            cout << x[m];
        }
        cout << " ";
        }
        else Lap(i+1, k, n, x, s);
    }
    return;

}
int main()
{
    string s;
    char *x = new char [1];
    getline(std::cin, s);
    int n = s.length();
    for (int i = 2; i <= 3; i++)
    {
        Lap(0,i,n,x,s);
    }
    return 0;


}
