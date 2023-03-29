#include <iostream>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl; //Đây là câu lênh cerr bị lỗi. Lý do bị lỗi là vì c không phải là giá trị con trỏ thu được từ 1 biểu thức new array
    return 0;

}

