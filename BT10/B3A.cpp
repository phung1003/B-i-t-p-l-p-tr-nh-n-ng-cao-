#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;
};

Point mid_point(Point const p1, Point const p2)
{
    Point kq;
    kq.x = (p1.x + p2.x) / 2;
    kq.y = (p1.y + p2.y) / 2;
    return kq;
}

void print(Point x)
{
    cout << "(" << x.x <<", " << x.y <<")";
}

int main()
{
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    print(mid_point(p1, p2));
    return 0;
}


