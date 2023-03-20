#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
};

void print(Point x)
{
    cout << "(" << x.x <<", " << x.y <<")";
}

int main()
{
    Point x;
    cin >> x.x >> x.y;
    print(x);
    return 0;
}
