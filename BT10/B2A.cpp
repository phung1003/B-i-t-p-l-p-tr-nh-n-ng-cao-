#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;
};

void print1(Point x)
{
    cout << &x << endl;
}

void print2(Point &x)
{
    cout << &x << endl;

}

int main()
{
    Point t;
    cin >> t.x >> t.y;
    cout << &t << endl;
    print1(t);
    print2(t);
    return 0;
}
