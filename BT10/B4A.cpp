#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;
};

int main()
{
    Point p;
    cin >> p.x >> p.y;
    cout << &p.x << endl << &p.y << endl << &p;
    return 0;
}
// Trường được khia báo đầu tiên trùng địa chỉ với biến point. Trường sau có địa chỉ cách biến 8 ô nhớ, bằng với kiểu double

