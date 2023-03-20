#include <iostream>
using namespace std;
struct Point{
    int x[5];

};

struct sub
{
    Point p;
};

int main(){
    Point p;
    for (int i = 0; i < 5; i++) p.x[i] = i+1;
    cout << &p << endl;
    Point a;
    cout << &a << endl;
    a = p;
    cout << &a << endl;
    for (int i = 0; i < 5; i++) cout << a.x[i] << ' ';
    cout << endl;


    sub s;
    s.p = p;
    cout << &s << endl;
    sub u;
    cout << &u << endl;
    u = s;
    cout << &u << endl;


    return 0;
}



// Với trường hợp trường là mảng thì khi sao chép sẽ là tham trị. Với trường hợp trường là struct thì khi sao chép sẽ là tham trị

