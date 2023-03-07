#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    cin >> n;
    srand(time(0));
    cout << (rand() % (n + 1)) << " ";
    return 0;
}
